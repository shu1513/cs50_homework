def main():

    a = " Hello, World! HH"
    for i in a:
        if i == "H":
            b=a.replace(i,"C")
    print(b)

if __name__ == "__main__":
    main()
