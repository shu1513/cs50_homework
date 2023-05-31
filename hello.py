

def main():
    print(sayhello(3))

def sayhello(n: 'number_of_hellos') -> str:
    result = ""
    for _ in range(n):
        result += "hello\n"
    return result



if __name__ == "__main__":
    main()
