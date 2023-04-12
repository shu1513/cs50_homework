def main():
    a = [0,1,2,3,4,5,6,7]
    for i in a:
        if i == 2:
            continue
        elif i ==5:
            break
        else:
            print(i)


if __name__ == "__main__":
    main()
