#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool only_digits (string x);


int main(int argc, string argv[])
{


    if(argc != 2 )
    {printf("Usage: ./caesar key\n");
    return 1;}

    if (only_digits (argv[1]) = false)
    {printf("Usage: ./caesar key\n");
    return 1;}
}

bool only_digits (string x)
{
    int i = strlen (argv[1]);

    for (int j =0; j < i; j++)

   if ((int)argv[1][j] <48 || (int)argv[1][j]>57)
   {
    return 1;
    }
   else
   {
    return 0;
   }

}
