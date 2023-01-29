# include <cs50.h>
#include <stdio.h>

int main(void)
{
    char a = 'q';
    int *p = &a;
    printf("%p\n", p);
}