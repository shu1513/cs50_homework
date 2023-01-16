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
        collatz(x/2)
    }
    else (x % 2 != 0)
    {
        collatz(x*3+1)
    }
    // get the number to 1 using collatz
    // get how many times it took to get to collatz
    // return how many steps it took
    return n;

}