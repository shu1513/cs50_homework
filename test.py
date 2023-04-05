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
    for i in range(len(list)):
        list2.append(list[i])

    return list2
if __name__ == "__main__":
    main()