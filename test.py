def main():


    name = getstudent()
    name[1] = "c"
    print(f"{name[0]} {name[1]}")


def getstudent():
    n = "a"
    h = "b"
    return n, h

if __name__ == "__main__":
    main()
