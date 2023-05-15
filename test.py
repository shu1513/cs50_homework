class Student:
    n = 0
    def __init__(self):
        Student.n += 1



def main():

    a = "c"
    print(id(a))
    b()
    print(id(a))
    print(a)

def b():
    a = "b"
    print(id(a))
    print(a)




if __name__ == "__main__":
    main()
