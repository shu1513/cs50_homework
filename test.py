class Person:
    n = 0
    def __init__(self,x):
        self.fullname = x

    def sayhello(self):
        print('hello')
    @classmethod
    def sayhi(cls):
        print('hi')
    @property
    def fullname(self):
        return self._first
    @fullname.setter
    def fullname(self, first):
        self._first=first



class Student(Person):
    def __init__(self, a, b, c):
        Person.__init__(self,a,b)
        self.c=c



def main():

    x = Person("yang")
    print(x.fullname)



if __name__ == "__main__":
    main()
