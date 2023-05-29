class Person:
    n = 0
    def __init__(self, first,last):
        self.first = first
        self.last = last
    def sayhello(self):
        print('hello')
    @classmethod
    def sayhi(cls):
        print('hi')
    def fullname(self):
        return self.first, self.last

class Student(Person):
    def __init__(self, a, b, c):
        Person.__init__(self,a,b)
        self.c=c



def main():

    x = Person('Shu', 'Yang')
    print(x.fullname())



if __name__ == "__main__":
    main()
