#include <cs50.h>
#include <stdio.h>

bool only_letter (string x)

int main(int argc, string argv[])
{
    //check if only typed 2 things
     if(argc != 2 )
    {printf("Usage: ./substitution key\n");
    return 1;}
    //check if the input is only letter

}

bool only_letter (string x)
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