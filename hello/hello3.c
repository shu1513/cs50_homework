#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n;
    do
    {
        n = get_int ("Enter Height: ");
        }
    while (n<1 || n>8);
    for (int i = 0; i < n; i++)
    {
        for(int y = 0; y < n-1-i; y++)
        {
            printf(" ");
        }
        for(int j = 0; j < i+1; j++)
        {
            printf("#");
        }
        printf("  ")
        printf("\n");
    }
}