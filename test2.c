# include <cs50.h>
#include <stdio.h>

int main(void)
{
    char a = 'q';
    char *p = &a;
    char *x = &p;
    printf("%p\n", x);
}