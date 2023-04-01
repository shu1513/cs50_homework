books=[]

for i in range(3):

    book = {}
    book["title"]= input("title ")
    book["author"]= input("author ")
    books.append(book)

for book in books:
    print(book["author"])



