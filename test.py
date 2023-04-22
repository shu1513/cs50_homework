def main():

    persistence(999)
    print(a)

def persistence(n):
    strn=str(n)
    a = 1
    times=0
    cpn = n
    if cpn//10 == 0:
        return times
    else:
        while cpn//10 !=0:
            for i in strn:
                a=a*int(i)
            cpn = a
            a=1
            times += 1
            strn = str(cpn)
        return times

if __name__ == "__main__":
    main()
