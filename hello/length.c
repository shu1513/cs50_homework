#include <stdio.h>
#include <cs50.h>

int get_string_length(string x);

int main (void)
{
    string s = get_string ("type your string here ");
    printf("your string has %i characters.\n", get_string_length(s));
}

int get_string_length(string x);
{
    int i;
    for (int i = 0; x[i] != 0; i++)
    {}
    return i;
}