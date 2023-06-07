



def main():

   name = input("what's your name? ")
   print (sayhello(name))


def sayhello(user_input):
    return f'''hello {user_input}'''



if __name__ == "__main__":
    main()
