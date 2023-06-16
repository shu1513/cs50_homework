import csv
from cs50 import SQL

open("final.db", "w").close()
db = SQL("sqlite:///final.db")
db.execute(
    "CREATE TABLE stunames(id INTEGER NOT NULL, name TEXT NOT NULL, PRIMARY KEY(id))"
)
db.execute(
    "CREATE TABLE houses(id INTEGER NOT NULL, house TEXT NOT NULL, PRIMARY KEY(id))"
)
db.execute(
    "CREATE TABLE assignments(student_id INTEGER NOT NULL, house_id INTEGER NOT NULL, FOREIGN KEY(student_id) REFERENCES stunames(id), FOREIGN KEY(house_id) REFERENCES houses(id))"
)

with open('students.csv', 'r') as file:
    reader = csv.reader(file)
    for row in reader:
        db.execute()


