from cs50 import get_int
user_input = get_int("Height: ")
while user_input <1 or user_input >8:
    user_input = get_int("Height: ")
for i in range(user_input):
    print(" "* (user_input-i-1) + "#" * (i+1))