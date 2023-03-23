from cs50 import get_int
user_input = get_int("Height: ")
if user_input <1 or user_input >8:
    user_input = get_int("Height: ")
for i in range(user_input):
    print(" "* i + "#" * (i+1))