#include <stdio.h>
#include <cs50.h>


float average (int x[], int y);
int get_number_of_exams (void);
int get_scores (int n)

int main (void)
{

   int number_of_exams = get_number_of_exams ();
   int scores[] = get_scores(number_of_exams);
   printf("Average score is %f\n", average(scores, number_of_exams));
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

float average (int x[], int y)
{
   int sum = 0;
   for (int i =0; i < y; i++)
   {
      sum = sum + x[i];
   }
   return sum/ ((float) y);
}

int get_scores(int n);
   for (int i =0; i <n; i++)
   {
     do {
      scores[i] = get_int ("Exam %i Score: ", (i+1));
      if (scores[i] <= 0)
      {
         printf("Score needs to be a positive number\n");
      }
      }
      while (scores[i] <= 0);
      return scores[i]
   }