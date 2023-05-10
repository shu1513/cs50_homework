class Student:
    ...



def main():


    name = getstudent()
    print(f"{name.n} {name.h}")


def getstudent():
    n = "a"
    h = "b"
    a = Student(n,h)
    return a

if __name__ == "__main__":
    main()
