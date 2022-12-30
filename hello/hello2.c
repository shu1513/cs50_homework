#include <stdio.h>
#include <cs50.h>
#include <string.h>


float average (int x[])

int main (void)
{

   int number_of_exams = get_int ("How many exams did you take?  ");
   float average_score = average (number_of_exams)
   printf("%f\n", average_score)
}