def main():
    n = input("number here ")
    result = digitize(n)
    print(result)
def digitize(n):

    list = []

    a = str(n)

    for i in a:
        list.append(int(i))

    list2 = []
    b = len(list)
    while b > 0:
        list2.append(list[b-1])
        b = b-1

    return list2
if __name__ == "__main__":
    main()