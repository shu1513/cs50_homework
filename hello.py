def main():

    x= get_int("what's the number? ")
    print(x)

def get_int(x):
    while True:
        try:
            x = int(input(x))

        except ValueError:
            pass
        else:
            break
    return x


main()


