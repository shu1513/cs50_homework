def main():

    x=sum_of_multiples(20,[5,6])
    print(x)

def sum_of_multiples(limit, multiples):

    nset = set()
    for each in multiples:
        i = 1
        while each * i < limit:
            nset.add(each * i)
            i += 1
    return sum(nset)

if __name__ == "__main__":
    main()
