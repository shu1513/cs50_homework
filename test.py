class Person:
    n = 0
    def __init__(self, a,b):
        self.a=a
        self.b=b

class Student(Person):
    def __init__(self, a, b, c):
        def super().__init__(a,b):
        self.c=c



def main():

    x = Student(1,2,3)

    print(x.b)
    print(x.c)




if __name__ == "__main__":
    main()
