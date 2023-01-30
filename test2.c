# include <cs50.h>
#include <stdio.h>

int main(void)
{
    string a = "Hi!";
    string *b = &a;
    printf("%p\n", &a);
}