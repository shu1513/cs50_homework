#include <stdio.h>
#include <cs50.h>
#include <string.h>


float average (int x[])
int get_number_of_exams (void)

int main (void)
{

   int number_of_exams = get_number_of_exams (void);
   float average_score = average (number_of_exams);
   printf("%f\n", average_score);
}

int get_number_of_exams (void)
{
   do
   {
     int n = get_int ("How many exams did you take?  ")
     if (n <= 0)
     {
      printf("The number ")
     }
   }
   while (n <= 0)
}