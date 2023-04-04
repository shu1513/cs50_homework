def main():

    x= get_int("what's the number? ")
    print(x)

def get_int(a):
    while True:
        try:
            y = int(input(a))

        except ValueError:
            pass
        else:
            break
    return y


main()


