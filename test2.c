#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string a = "Hi!";
    string b = get_string("b: ");
    if (*a == *b)
    {printf("same\n");}
    else
    {printf("different\n");}
}