def main():

# get user input
    text = input("Text: ")

#count numnber of letters
    letters = countletters(text)
#count number of words
    words = countwords(text)
#count number of sentences
    sentences = countsentences(text)
#formular and round up

index = 0.0588 * L - 0.296 * S - 15.8
# print grade level
def countletters(text):
    sum = 0
    for i in text:
        if 64 < i < 91 or 96 < i < 123:
            sum += 1
    return sum


def countwords(text):
    sum = 0
    for i in text:
        if i = 32:
            sum += 1
    return sum


def countsentences(text):
    sum = 0
    match text:
        case "." | "!" | "?"


main()