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

    //convert string into integers
    int key = int atoi(string argv1);

    // get user plaintext
    string plain_text = get_string("Plaintext:  ")

    //encipher the plaintext

    //get string length of the plain text
    int string_length = strlen (plain_text)

    for (i = 0; i < string_length; i++)
    if (plain_text[i])


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
