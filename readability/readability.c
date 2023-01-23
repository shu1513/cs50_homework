#include <cs50.h>
#include <stdio.h>

int get_characters(string x)

int main(void)
{
    string user_input = get_string ("Text: \n");

    //count characters
    int number_of_characters = get_characters(user_input);
    //count words using spaces
    int number_of_words = get_words();
    //count sentences by special characters
}