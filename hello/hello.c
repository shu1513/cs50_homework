#include <stdio.h>
#include <cs50.h>
#include <string.h>

void draw(int n);

int main (void)
{
    int height = get_int("Enter Height here  ");
    draw(height);
}

void draw(int n)
{

    draw(n-1);
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n")
}