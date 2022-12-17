#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n;
    do
    {
        n = get_int ("Enter Height: ");
        }
    while (n < 1);

    for (int i = 1; i <= n; i++)
    {
        int j = n-1;
        while (j>=1)
        {
            printf("a");
            j--;
        }
        printf("#\n");
    }
}