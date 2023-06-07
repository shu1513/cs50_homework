



def main():

   user_input = input("input here ")
   print (sayhello(user_input))


def sayhello(name):
    return f'''hello, {name}'''

def square(number):
   return number+number

if __name__ == "__main__":
    main()
