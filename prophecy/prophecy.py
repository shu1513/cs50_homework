import csv
from cs50 import SQL

open('final.db', 'w').close()
db = SQL("sqlite:///final.db")