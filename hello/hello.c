#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("false\n");
        return 1;
    }
    else
    {
        printf("hi %s\n", argv[1]);
    }
}