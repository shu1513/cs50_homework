# include <cs50.h>
#include <stdio.h>

int main(void) {
    int number = get_int ("what is the number you want to enter? ");
    if (number % 2 == 0)
    {
        printf("this is an even number\n");
    }
    else
    {
        printf("This is an odd number.\n");
    }
}