class Student:
    ...



def main():


    number = int(input("enter positive number here: "))
    if number <0:
        raise ShuError ("number must be positive")
    print(number)

if __name__ == "__main__":
    main()
