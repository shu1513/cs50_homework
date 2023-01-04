#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // Get the user input
    string user_input = get_string ("Type your input here and we will conver it into binary light bulbs ");
    // string to array
    //calculate the length of the string
    int user_input_string_length = strlen(user_input);
    printf("string length %i", user_input_string_length)

    // conver the user input into decimal
    // conver the decimal into 8 digit binary, with proper format
    // print into bulb
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
