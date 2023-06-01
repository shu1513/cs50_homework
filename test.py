class Person:
    def __init__(self,first, last):
        self.fullname = f'''{first} {last}'''

    @property
    def fullname(self):
        return self._fullname
    @fullname.setter
    def fullname(self, input):
        if not input:
            raise ValueError ("need to type a name here")
        else:
            self._fullname= input
    def sayhello(self):
        print('hello')

def main():

    x = Person('Shu','Yang')
    
    x.sayhello()

if __name__ == "__main__":
    main()
