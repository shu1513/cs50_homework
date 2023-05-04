def main():

    a = " Hello, World! "
    for i in a:
        if i == "H":
            a.replace(i,"C")
    print(a)

if __name__ == "__main__":
    main()
