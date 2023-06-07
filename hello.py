



def main():

   user_input = input("input here ")
   print (sayhello(user_input))


def sayhello(name):
    return f'''hello, {name}'''

def calculate(number):
   return number**2

if __name__ == "__main__":
    main()
