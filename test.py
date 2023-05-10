class Student:
    ...



def main():


    name = getstudent()
    print(f"{name.n} {name.h}")


def getstudent():
    n = "a"
    h = "b"
    Student(n,h)
    a = Student()
    return a

if __name__ == "__main__":
    main()
