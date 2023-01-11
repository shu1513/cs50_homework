#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool only_letter (string x);
bool characterunits(string y);

int main(int argc, string argv[])
{
    //check if only typed 2 things
     if(argc != 2 )
    {printf("Usage: ./substitution key\n");
    return 1;}
    //check if the input is only letter
    if only_letter (argv[1])
    {printf("Usage: ./substitution key should only contain non-repeat alphabet\n")}

    //check if the input is 26 characters
    if charactersunits(argv[1])
    {
        printf("Key must contain 26 characters.\n");
    }
    //make sure no letter repeats


    //get plaintext
    //assign plaintext
    //conver everything into upper case

}

bool charaterunits(y)
{
    int a = strlen(y)
    for (i = 0; i < a; i++)
    {
        if (isalpha(y[i]) == 0)
        {return true
        break}
    }
    return false
}

bool only_letter (string x)
{
    int i = strlen(x);

    for (int j =0; j < i; j++)
    {

   if (((int)x[j] > 64 && (int)x[j] < 91) || ((int)x[j] > 96 && (int)x[j] < 123))
   {
    return true;
    }
    }
    return false;
}