from cs50 import get_int
while True:
    a = get_int("Height: ")
    if 1 <= a <= 8:
        break
for i in range(a):
    print(" "* (a-i-1) + "#"*(i+1) + "  " + "#"*(i+1))

