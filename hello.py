class Sentence:
    def __init__(self,string):
        self = string.split()


def main():
    my_sentence = Sentence('This is a test')
    for word in my_sentence:
        print(word)

def sentence(string):
    for word in string.split():
        yield word




if __name__ == "__main__":
    main()
