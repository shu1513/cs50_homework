#include <stdio.h>
#include <cs50.h>
#include <string.h>

int collatz (int x);

int main (void)
{
    int n = get_int ("Enter Number Here: ");
    int a = collatz(n);
    printf("It takes %i steps for collatz method to get your number to 1.\n")

   }

int collatz (int x)
{
    if x == 1;
    (
        return 1;
    )
    elif (x % 2 == 0)
    {
        collatz(x) = x/2
    }
    elif (x % 2 != 0)
    {
        x = x*3+1
    }
    // return how many steps it took

}