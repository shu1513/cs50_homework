def main():

    a = is_armstrong_number(153)
    print(a)

def is_armstrong_number(number):
    copynumber = number
    sum = 0
    length = len(str(copynumber))
    i = 1
    while i < length + 1:
        a = copynumber % 10**i
        sum = sum + a**length
        i += 1
        copynumber = copynumber // 10
    if sum == number:
        return True
    else:
        return False

if __name__ == "__main__":
    main()
