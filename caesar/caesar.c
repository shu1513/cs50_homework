#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool only_digits (string x);


int main(int argc, string argv[])
{

    //check if user only entered one input for the key
    if(argc != 2 )
    {printf("Usage: ./caesar key\n");
    return 1;}

    //check if the user only entered digits
    if (only_digits (argv[1]) == false)
    {printf("Usage: ./caesar key\n");
    return 1;}


}

bool only_digits (string x)
{
    int i = strlen(x);

    for (int j =0; j < i; j++)
    {

   if ((int)x[j] <48 || (int)x[j]>57)
   {
    return false;
    }
    }
    return true;

}
