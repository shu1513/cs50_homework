#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int get_characters(string x, int a);
int get_words(string y, int b);
int get_sentences(string z, int c);
int get_grade_level(int a, int b, int c);
void print_grade(int a);

int main(void)
{
    string user_input = get_string ("Text: ");
    int string_length = strlen(user_input);
    //count characters
    int number_of_characters = get_characters(user_input, string_length);
    //count words using spaces
    int number_of_words = get_words(user_input, string_length);
    //count sentences by special characters
    int number_of_sentences = get_sentences(user_input, string_length);
    //calculate grade level using formular
    int grade_level = get_grade_level(number_of_characters, number_of_words, number_of_sentences);

    print_grade(grade_level);
}

int get_characters(string x, int a)
{
    int count = 0;
    for (int i = 0; i < a; i ++)
    {
        if (isalpha(x[i]))
        {
            count++;
        }
    }
    return count;
}

int get_words(string y, int b)
{
    int count = 0;
    for (int i = 0; i < b; i ++)
    {
        if(y[i] == 32)
        {
            count++;
        }
    }
    return (count + 1);
}

int get_sentences(string z, int c)
{
    int count = 0;
    for (int i = 0; i < c; i ++)
    {
        if(z[i] == '.' || z[i] == '!' || z[i] == '?')
        {
            count++;
        }
    }
    return count;
}

int get_grade_level(int a, int b, int c)
{
    int index = round(0.0588 * ((double) a/b*100) - 0.296 * ((double) c/b*100) - 15.8);
    return index;
}

void print_grade(int a)

{
    if (a < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (a > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", a);
    }
}