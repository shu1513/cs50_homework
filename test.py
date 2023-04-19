def main():
    is_isogram("hello")

def is_isogram(string):
    original = list(string.lower())
    print (original)
    new= list(set(original))
    print (new)
    if new == original:
        return True
    else:
        return False



if __name__ == "__main__":
    main()
