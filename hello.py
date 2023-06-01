

def main():


    b=['a','b','c']
    c =(1,2,3,4,5,6,)
    _,*a = zip(b,c)
    print([*a])



def total(**kwargs):
    return kwargs['a']*kwargs['b']*kwargs['c']



if __name__ == "__main__":
    main()
