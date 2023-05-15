class Student:
    n = 0
    def __init__(self):
        Student.n += 1



def main():


    a=Student()
    b=Student()
    c=Student()
    print(c.n)

if __name__ == "__main__":
    main()
