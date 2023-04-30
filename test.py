def main():

    x=sum_of_multioples(20,[3,5])
    print(x)

def sum_of_multiples(limit, multiples):
    i = 1
    nset = set()
    for each in multiples:
        while each * i < limit:
            nset.add(each * i)
            i += 1
    return sum(nset)

if __name__ == "__main__":
    main()
