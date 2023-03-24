import sys
import cs50

def main():

    cents = get_cents()

    quaters = get_quaters(cents)

    dimes = get_dimes(cents)

    nickels = get_nickels(cents)

    pennies = get_pennies(cents)

    coins = quaters + dimes + nickels + pennies

    print(coins)

def get_cents():
    while True:
        change_owed = cs50.get_float("Change owed: ")
        if change_owed > 0:
            break
    cents = round(change_owed % 1, 2) * 100
    return cents

def get_quaters(cents):
    cents 

main()