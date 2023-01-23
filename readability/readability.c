#include <cs50.h>
#include <stdio.h>

int get_characters(string x);
int get_words(string y);
int get_sentences(string z);

int main(void)
{
    string user_input = get_string ("Text: \n");

    //count characters
    int number_of_characters = get_characters(user_input);
    //count words using spaces
    int number_of_words = get_words(user_input);
    //count sentences by special characters
    int number_of_sentences = get_sentences(user_input);
    //calculate grade level using formular 
    int grade_level = get_grade_level(number_of_characters, number_of_words, number_of_sentences);
}