#include <stdio.h>
#include <cs50.h>


float average (int y, int x[]);
int get_number_of_exams (void);

int main (void)
{

   int number_of_exams = get_number_of_exams ();
   int scores[number_of_exams];
   for (int i =0; i <number_of_exams; i++)
   {
     do {
      scores[i] = get_int ("Exam %i Score: ", (i+1));
      if (scores[i] <= 0)
      {
         printf("Score needs to be a positive number\n");
      }
      }
      while (scores[i] <= 0);
   }
   printf("Average score is %f\n", average(number_of_exams, scores));
}

int get_number_of_exams (void)
{
   int n;
   do
   {
     n = get_int ("How many exams did you take?  ");
     if (n <= 0)
     {
      printf("The number needs to be a positive number\n");
     }
   }
   while (n <= 0);
   return n;
}

float average (int y, int x[])
{
   int sum = 0;
   for (int i =0; i < y; i++)
   {
      sum = sum + x[i];
   }
   return sum/ ((float) y);
}