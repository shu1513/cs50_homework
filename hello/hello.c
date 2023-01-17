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
    if (x == 1)
    {
        return 0;
    }
    else if( x % 2 == 0)
    {return 1 + collatz(x/2);
    }
    else
    {return 1 + collatz(x*3+1);
    }
}