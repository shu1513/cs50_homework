#include <stdio.h>
#include <cs50.h>

int number_of_exams;
float average (int x[]);
int get_number_of_exams (void);

int main (void)
{

   number_of_exams[i] = get_number_of_exams ();
   scores[number_of_exams]
   printf("Average score is %f\n", average());
}

int get_number_of_exams (void)
{
   do
   {
     int n = get_int ("How many exams did you take?  ");
     if (n <= 0)
     {
      printf("The number needs to be a positive number");
     }
   }
   while (n <= 0)
   return n;
}

float average (int x[])
{
   int sum = 0;
   for (i =0; i < number_of_exams, i++)
   {
      sum = sum + x[number_of_exams];
   }
   return sum/ ((float) number_of_exams);
}