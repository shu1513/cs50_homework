# include <cs50.h>
#include <stdio.h>

void calculate (&a);
int main(void)
{
    int a = 20;
    int *p = &a
    calcualte(p);
    printf("%i\n", a);
}

void calcualte(&a)
{
    a = 21;
}
