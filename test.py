class Person:
    n = 0
    def __init__(self, first,last):
        pass

    def sayhello(self):
        print('hello')
    @classmethod
    def sayhi(cls):
        print('hi')
    @property
    def fullname(self):
        return self._first + " " + self._last
    @fullname.setter
    def fullname(self, first, last):
        self._first=first
        self._last=last


class Student(Person):
    def __init__(self, a, b, c):
        Person.__init__(self,a,b)
        self.c=c



def main():

    x = Person('Shu', 'Yang')
    print(x.fullname)



if __name__ == "__main__":
    main()
