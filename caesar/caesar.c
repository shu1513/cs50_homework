#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{

    if(argc != 2 )
    {printf("Usage: ./caesar key\n");
    return 1}

    int i = strlen (argv[1]);
   for (int j =0; j < i; j++)
   if ((int)argv[1][j] <48 || (int)argv[1][j]>57)
    {printf("Usage: ./caesar key\n");
    return 1}

}