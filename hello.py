class Sentence:
    def __init__(self,string):
        self.content = string.split()
        self.i = 0
    def __iter__(self):
        return self
    def __next__(self):

        if self.i >= len(self.content):
            raise StopIteration
        else:
            word = self.content[self.i]
            self.i += 1
            return word



def main():

    my_sentence = sentence('This is a test')
    for word in my_sentence:
        print(word)


def my_range(start, end):
    current = start
    while current < end:
        yield current
        current += 1

def sentence(string):
    stringlist=string.split()
    i = 0
    while i < len(stringlist):
        yield stringlist[i]
        i += 1





if __name__ == "__main__":
    main()
