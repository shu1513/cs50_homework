import sys
import cs50

def main():

    cents = get_cents()

    quaters = get_quaters(cents)
    cents = cents - quaters*25

    dimes = get_dimes(cents)
    cents = cents - dimes*10

    nickels = get_nickels(cents)
    cents = cents - nickels*5

    pennies = get_pennies(cents)

    coins = int(quaters + dimes + nickels + pennies)

    print(coins)

def get_cents():
    while True:
        change_owed = cs50.get_float("Change owed: ")
        if change_owed > 0:
            break
    cents = round(change_owed % 1, 2) * 100
    return cents

def get_quaters(cents):
    quaters = int(cents/25)
    return quaters

def get_dimes(cents):
    dimes = int(cents/10)
    return dimes

def get_nickels(cents):
    nickels = int(cents/5)
    return nickels

def get_pennies(cents):
    pennies = cents
    return pennies

main()