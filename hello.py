import csv
with open("hello.csv", "a") as file:

    name = input("name ")
    number = input("number ")

    writer = csv.DictWriter(file, fieldnames = ["name", "number"])
    writer.writerow({"name": name, "number": number})



