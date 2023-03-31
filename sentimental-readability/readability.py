def main():

# get user input
    user_text = input("Text: ")

#count numnber of letters
    letters = countletters(user_text)
#count number of words
    words = countwords(user_text)
#count number of sentences
    sentences = countsentences(user_text)
#formular and round up
    L = letters/words *100
    S = sentences/words *100
    index = 0.0588 * L - 0.296 * S - 15.8
# print grade level
    printgradelevel(index)
def countletters(text):
    sum = 0
    for i in text:
        if 64 < ord(i) < 91 or 96 < ord(i) < 123:
            sum += 1
    return sum


def countwords(text):
    sum = 0
    for i in text:
        if ord(i) == 32:
                sum += 1
    return sum


def countsentences(text):
    sum = 0
    for i in text:
       if i == "." or i == "!" or i == "?":
                sum += 1
    return sum


def printgradelevel(result):
    if result < 1:
        print("Before Grade 1")
    elif result > 16:
        print("Grade 16+")
    else:
        print(f"Grade {round(result)}")
main()