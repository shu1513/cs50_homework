from cs50 import get_int
while True:
    a = get_int("Height: ")
    if 1 <= a <= 8:
        break
for i in range(1, a-1):
    print(" "* (a-i) + "#"*i + "  " + "#"*i)

