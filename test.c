# include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int a = get_int("height:  ");
    draw(a)
}

void draw(int n)
{

    for(int i = 0; i < 1; i++)
    {
        printf("#");
    }
    draw(n);
}