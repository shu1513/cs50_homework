

def main():


    b=['a','b','c']
    a = map(str.upper, b)
    print(a)



def total(**kwargs):
    return kwargs['a']*kwargs['b']*kwargs['c']



if __name__ == "__main__":
    main()
