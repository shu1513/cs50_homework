class Person:
    n = 0
    def __init__(self, a,b):
        self.a=a
        self.b=b
    def sayhello(self):
        print('hello')
    @classmethod
    def sayhi(cls):
        print('hi')

class Student(Person):
    def __init__(self, a, b, c):
        Person.__init__(self,a,b)
        self.c=c



def main():

    x = Student(1,2,3)
    Person.sayhi()
    x.sayhello()
    x.sayhi()
    print(x.b)
    print(x.c)




if __name__ == "__main__":
    main()
