#include <cs50.h>
#include <stdio.h>

int get_characters(string x, int a);
int get_words(string y, int b);
int get_sentences(string z, int c);
int get_grade_level(int a, int b, int c)

int main(void)
{
    string user_input = get_string ("Text: \n");
    int string_length = strlen(user_input);
    //count characters
    int number_of_characters = get_characters(user_input, string_length);
    //count words using spaces
    int number_of_words = get_words(user_input, string_length);
    //count sentences by special characters
    int number_of_sentences = get_sentences(user_input, string_length);
    //calculate grade level using formular
    int grade_level = get_grade_level(number_of_characters, number_of_words, number_of_sentences);
    void print_grade(grade_level);
}

void print_grade(grade_level)

{
    if (grade_level < 1)
    {
        printf("Before Grade 1\n");
    }
    if (grade_level >1)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade \n");
    }
}