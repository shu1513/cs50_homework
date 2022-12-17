#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n;
    do
    {
        n = get_int ("Enter Height: ");
        }
    while (8 < n < 1 );

    for (int i = 1; i <= n; i++)
    {
        for(int j = n - 1 ; j>=1;j--)
        {
            printf("a");
        }
        printf("#\n");
    }
}