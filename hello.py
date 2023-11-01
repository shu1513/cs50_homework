def main():

    class student:
        def __init__(self,name):
            self.name=name
        def __str__(self):
            return f'hi {self.name}'

        @classmethod
        def get(cls):
            name = input('name')
            reuturn cls(name)
        

if __name__ == "__main__":
    main()
