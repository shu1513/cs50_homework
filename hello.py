

def main():


    a=['a','b','c']
    b =[1,2,3]
    c = {item:value for item in a for value in b}
    print(c)



if __name__ == "__main__":
    main()
