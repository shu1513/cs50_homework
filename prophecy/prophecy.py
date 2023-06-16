import csv
from cs50 import SQL

open("final.db", "w").close()
db = SQL("sqlite:///final.db")
db.execute(
    "CREATE TABLE stunames(id INTEGER NOT NULL, name TEXT NOT NULL, PRIMARY KEY(id))"
)
db.execute(
    "CREATE TABLE houses(id INTEGER NOT NULL, house TEXT NOT NULL, head TEXT NOT NULL, PRIMARY KEY(id))"
)
db.execute(
    "CREATE TABLE assignments(student_id INTEGER NOT NULL, house_id INTEGER NOT NULL, FOREIGN KEY(student_id) REFERENCES stunames(id), FOREIGN KEY(house_id) REFERENCES houses(id))"
)

with open('students.csv', 'r') as file:
    reader = csv.DictReader(file)
    houses={}
    for row in reader:
        if row[house] not in houses:
            houses[row[house]]=row[head]
    for house in houses:
        id=db.execute('INSERT INTO houses(house, head) VALUES(?,?)', house, houses[house])

    for row in reader:
        id = db.execute('INSERT INTO studnames(name) VALUES(?)', row[student_name])
        db.execute('INSERT INTO assignments(student_id) VALUES(?)', id)
        if row[house] == "Slytherin":
            db.execute('INSERT INTO assignments(house_id) VALUES(?)', )


