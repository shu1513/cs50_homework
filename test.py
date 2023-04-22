def main():

    import functools

    factorio=[5,4,3,2,1]
    a = functools.reduce(lambda x,y: x*y, factorio)
    print(a)

if __name__ == "__main__":
    main()
