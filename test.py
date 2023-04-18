def main():

    values = [ [(2, "red"), (5, "blue"), (3, "orange")], [(4, "red"), (9, "blue"), (7, "orange")], [(8, "red"), (13,"blue"), (11, "orange")] ]
    zipped = zip(*values)
    print(zipped)



if __name__ == "__main__":
    main()
