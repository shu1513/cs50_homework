# include <cs50.h>
#include <stdio.h>

void calcualate (int *b);
int main(void)
{
    int a = 20;
    int *p = &a;
    calcualte(p);
    printf("%i\n", a);
}

void calcualte(int *b)
{
    b = 21;
}
