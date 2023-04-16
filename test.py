def main():
    b = {'name','shu',"age", 33}
    a = (13,12)
    c = [14,15,16]
    b.update({1,2,3}, a, c)
    print(b)



if __name__ == "__main__":
    main()
