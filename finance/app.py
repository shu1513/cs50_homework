import os
import string

from datetime import datetime
from cs50 import SQL
from flask import Flask, flash, redirect, render_template, request, session
from flask_session import Session
from werkzeug.security import check_password_hash, generate_password_hash

from helpers import apology, login_required, lookup, usd


# Configure application
app = Flask(__name__)


# Set HSTS header after each request
@app.after_request
def add_hsts_header(response):
    response.headers[
        "Strict-Transport-Security"
    ] = "max-age=31536000; includeSubDomains; preload"
    return response


# Custom filter
app.jinja_env.filters["usd"] = usd

# Configure session to use filesystem (instead of signed cookies)
app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"
Session(app)

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///finance.db")


@app.after_request
def after_request(response):
    """Ensure responses aren't cached"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response


@app.route("/")
@login_required
def index():
    """Show portfolio of stocks"""
    return apology("TODO")


@app.route("/buy", methods=["GET", "POST"])
@login_required
def buy():
    if request.method == "POST":
        symbol = request.form.get("symbol")
        stock_info = lookup(symbol)
        shares_str = request.form.get("shares")

        if not symbol or not stock_info:
            return apology("Invalid stock symbol")
        elif not shares_str:
            return apology("please enter numer of shares")
        else:
            try:
                shares = int(shares_str)
                if shares <= 0:
                    return apology("minimum 1 share")
                else:
                    price_per_share = float(stock_info["price"])
                    user_cash_list = db.execute("SELECT cash FROM users WHERE id = ?", (session["user_id"]))
                    user_cash = float(user_cash_list[0]["cash"])
                    cost_of_stock = price_per_share * shares
                    user_id = int(session["user_id"])

                    if user_cash < cost_of_stock:
                        return apology("not enough cash")
                    #do this on the user side too
                    else:
                        #see if the stock in the the database
                        stock_lookup = db.execute("SELECT stock_id FROM stocks WHERE stock_symbol = ?", symbol)
                        #if not in the database then add it into the stock database
                        if not stock_lookup:
                            db.execute("INSERT INTO stocks (stock_symbol) VALUES (?)", symbol)
                            stock_lookup = db.execute("SELECT stock_id FROM stocks WHERE stock_symbol = ?", symbol)
                        # add it into stock ownership of this user
                        db.execute("INSERT INTO ownership (user_id, stock_id, quantity) VALUES (?,?,?)",user_id,int(stock_lookup[0]["stock_id"]),shares)
                        # minus the owner's cash
                        updated_cash = user_cash - price_per_share*shares
                        db.execute("UPDATE users SET cash = ? WHERE id = ?", updated_cash,user_id)
                        # add this transaction into history
                        test = db.execute("SELECT * FROM ownership")
                        return render_template("test.html", test=test, updated_cash=updated_cash)



            except ValueError:
                return apology ("Invalid Shares")
    else:
        return render_template("buy.html")

@app.route("/test")
def test():
    return render_template("test.html", test=db.execute("SELECT * FROM ownership"), updated_cash=updated_cash)

@app.route("/history")
@login_required
def history():
    """Show history of transactions"""
    return apology("TODO")


@app.route("/login", methods=["GET", "POST"])
def login():
    """Log user in"""

    # Forget any user_id
    session.clear()

    # User reached route via POST (as by submitting a form via POST)
    if request.method == "POST":
        # Ensure username was submitted
        if not request.form.get("username"):
            return apology("must provide username", 403)

        # Ensure password was submitted
        elif not request.form.get("password"):
            return apology("must provide password", 403)

        # Query database for username
        rows = db.execute(
            "SELECT * FROM users WHERE username = ?", request.form.get("username")
        )

        # Ensure username exists and password is correct
        if len(rows) != 1 or not check_password_hash(
            rows[0]["hash"], request.form.get("password")
        ):
            return apology("invalid username and/or password", 403)

        # Remember which user has logged in
        session["user_id"] = rows[0]["id"]

        # Redirect user to home page
        return redirect("/")

    # User reached route via GET (as by clicking a link or via redirect)
    else:
        return render_template("login.html")


@app.route("/logout")
def logout():
    """Log user out"""

    # Forget any user_id
    session.clear()

    # Redirect user to login form
    return redirect("/")


@app.route("/quote", methods=["GET", "POST"])
@login_required
def quote():
    if request.method == "POST":
        symbol = request.form.get("quote")
        if not symbol:
            return apology("Need to enter stock symbol")
        else:
            stock_info = lookup(symbol)
            if not stock_info:
                return apology("invlaid symbol")
            else:
                return render_template(
                    "quoted.html",
                    company_name=stock_info["name"],
                    company_symbol=stock_info["symbol"],
                    price_per_share=usd(stock_info["price"]),
                )
    else:
        return render_template("quote.html")


@app.route("/register", methods=["GET", "POST"])
def register():
    if session.get("user_id"):
        return redirect("/")
    else:
        if request.method == "POST":
            username = request.form.get("username")
            password = request.form.get("password")
            existing_user = db.execute(
                "SELECT * FROM users WHERE username = ?", request.form.get("username")
            )
            if not request.form.get("username"):
                return apology("must provide username", 403)
            elif not password:
                return apology("must provide password", 403)
            elif not request.form.get("confirmPassword"):
                return apology("must re-enter password", 403)
            elif existing_user:
                return apology(
                    "this username already exist, please choose another", 403
                )
            elif request.form.get("confirmPassword") != request.form.get("password"):
                return apology("passwords words must match", 403)
            elif (
                len(password) < 8
                or not any(char.isupper() for char in password)
                or not any(char.islower() for char in password)
                or not any(char.isdigit() for char in password)
                or not any(char in string.punctuation for char in password)
            ):
                return apology(
                    "Passwords must be 8 to 16 digits long, containing at least 1 upper case letter and 1 lower case letter, one numeric digit, and one special character (example: @$!%*?&)",
                    403,
                )

            else:
                db.execute(
                    "INSERT INTO users (username, hash) VALUES (?, ?)",
                    username,
                    generate_password_hash(password),
                )
                user = db.execute("SELECT id FROM users WHERE username = ?", username)
                session["user_id"] = user[0]["id"]
                return redirect("/")
        else:
            return render_template("register.html")


@app.route("/sell", methods=["GET", "POST"])
@login_required
def sell():
    """Sell shares of stock"""
    return apology("TODO")
