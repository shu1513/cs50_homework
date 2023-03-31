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
        if number >0:
            return number


def check_validity(number):
    length = len(str(number))
    if (length == 13 or length == 15 or length == 16) and checksum(number):
        return True
    else:
        return False


def checksum(number):
    sum = 0
    i = 0
    while number != 0:
        if i % 2 == 0:
            sum += number % 10
        else:
            digit = 2 * (number % 10)
            sum = sum + (digit // 10 + digit % 10)
        i += 1
        number //= 10
    return sum % 10 == 0


def print_brand(number):
    if ((number >= 34e13 and number < 35e13) or
            (number >= 37e13 and number < 38e13)):
        print("AMEX\n")
    elif (number >= 51e14 and number < 56e14):
        print("Mastercard\n")
    elif ((number >= 4e12 and number < 5e14) or
            (number >= 4e15 and number < 5e16)):
        print("VISA\n")
    else:
        print("INVALID\n")


main()