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

def main():

    x = Person('Shu','Yang')
    print(x.fullname)
    x.fullname = "hi"
    print(x.fullname)
    x.fullname = ""
    print(x.fullname)

if __name__ == "__main__":
    main()
