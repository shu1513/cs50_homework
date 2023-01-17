#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool only_letter (string x);
bool characterunits(string y);
bool repeat(string z);

int main(int argc, string argv[])
{
    //check if only typed 2 things
     if(argc != 2 )
    {printf("Usage: ./substitution key\n");
    return 1;}
    //check if the input is only letter
    if (only_letter (argv[1]))
    {printf("key should only contain non-repeat alphabet\n");
    return 1;}

    //check if the input is 26 characters
    if (characterunits(argv[1]))
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    //make sure no letter repeats
    if (repeat(argv[1]))
    {
        printf("letters can't repeat.\n");
        return 1;
    }



    //get plaintext
    //assign plaintext
    //conver everything into upper case
    // make that A-Z
    //conver ecerything to lower case
    // make that a-z

}

bool characterunits(string y)
{
   int a = strlen(y);
   if (a == 26)
   {return false;}
   else
   {return true;}
}

bool only_letter (string x)
{
    int a = strlen(x);
    for (int i = 0; i < a; i++)
    {
        if (isalpha(x[i]) == 0)
        {
            return true;
            break;
        }
    }
    return false;
}

bool repeat(string z)
{
    // conver everything into upper case
    int n = strlen(z);
    for (int i = 0; i < n; i++)
    {
       z[i] = toupper(z[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (z[i] == z[j])
            {
                return true;
            }
        }
    }
    return false;
}