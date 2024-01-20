# include <cs50.h>
#include <stdio.h>

void math (int *b);
int main(void)
{
    int a = 20;
    int *p = &a;
    math(p);
    printf("%i\n", a);
}

void math(int *b)
{
    *b = 21;
}
