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
    i = 0
    while ccn != 0:
        if i % 2 == 0:
            sum += ccn % 10
        else:
            digit = 2 * (ccn % 10)
            sum = sum + (digit // 10 + digit % 10)
        i += 1
        ccn //= 10
    return sum % 10 == 0

def print_brand(number):




main()