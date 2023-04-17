def main():
    print(my_function(a=1.1,b=2.1,c=3.1,1,2,3))

def my_function(*args):
    return sum(args)





if __name__ == "__main__":
    main()
