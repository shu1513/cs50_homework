

def main():

    print(total({'a':2,'b':3,'c':'h'}))



def total(**kwargs):
    return kwargs[0]*kwargs[1]*kwargs[2]



if __name__ == "__main__":
    main()
