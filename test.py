class Student:
    n = 0
    def __init__(self):
        Student.n += 1



def main():

    a = Student()
    print(id(a))

def b():
    a = "b"


if __name__ == "__main__":
    main()
