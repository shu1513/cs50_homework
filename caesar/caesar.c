#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

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
    int key = atoi(argv[1]);

    // get user plaintext
    string plain_text = get_string("Plaintext:  ");

    //encipher the plaintext

    //get string length of the plain text
    int string_length = strlen (plain_text);

    for (int i = 0; i < string_length; i++)
    {if (isalpha(plain_text[i]) && isupper(plain_text[i]))
    {
        char x = plain_text[i] - 65;
        char y = (x + key) %26;
        plain_text[i] = y +65;
    }
    printf("Ciphertext %c",plain_text[i]);}

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
