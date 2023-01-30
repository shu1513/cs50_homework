# include <cs50.h>
#include <stdio.h>

int main(void)
{
    char *a = "Hi!";
    char *b = &a;
    printf("%p\n", &a);
}