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
    int n = 0;
    if (x == 1)
    {
        return n;
    }
    if( x % 2 == 0)
    {collatz(x); 
    n++;
    //do a collatz process and add 1 to N
    //count times
    // int n = count times
    }
    else
    {collatz(x*3+1);
    n++;
    }


    return n;
}