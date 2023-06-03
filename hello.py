class Sentence:
    def __init__(self,string):
        self.content = string.split()
    def __iter__(self):
        return self
    def __next__(self):
        i = 0
        if i >= len(self.content):
            raise StopIteration
        else:
            word = self.content[i]
            i += 1
            return word



def main():
    my_sentence = Sentence('This is a test')
    for word in my_sentence:
        print(word)

def sentence(string):
    for word in string.split():
        yield word




if __name__ == "__main__":
    main()
