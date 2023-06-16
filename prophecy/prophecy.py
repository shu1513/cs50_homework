import csv
from cs50 import SQL

open('final.db', 'w').close()
db = SQL("sqlite:///final.db")
db.execute('CREATE TABLE stunames(id INTEGER NOT NULL, name TEXT NOT NULL, PRIMARY KEY(id))')