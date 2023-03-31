from cs50 import get_int

def main():

number = get_number()

if check_validity(number):
    print_brand(number)
else:
    print("Invalid")



def get_number():
    while True:
        number = get_int("Number: ")
        if number >0
        break

def check_validity(number):
    length = len(str(number))
    if (length == 13 or length == 15 or length == 16) and checksum(number):
        return True
    else:
        return False


def checksum(number):
    sum = 0
    

def print_brand(number):




main()