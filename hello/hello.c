#include <stdio.h>
#include <cs50.h>
#include <string.h>

int collatz (int x);

int main (void)
{


    int n = get_int ("Enter Number Here: ");
    int a = collatz(n);
    printf("It takes %i steps for collatz method to get your number to 1.\n", a);

   }

int collatz (int x)
{
    //count times
    // int n = count times

    int n = 1;
    while (x != 1)
    {

    if (x % 2 == 0)
    {
        x = x/2;
        n++;
       // again loop back
    }
    if (x % 2 != 0 && x != 1)
    {
        x = x*3 +1;
        n++;
    }
    // get the number to 1 using collatz
    // get how many times it took to get to collatz
    // return how many steps it took
    }
    return n;
}