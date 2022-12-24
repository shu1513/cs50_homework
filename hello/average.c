#include <cs50.h>
#include <stdio.h>

int get_number_of_exams (void);
int get_average_scores (number_of_exams);

int main(void)
{
   int number_of_exams = int get_number_of_exams (void);
   int average_score = int get_average_scores (number_of_exams);
   printf ("Your average score is %i\n", average_score);
}

int get_number_of_exams (void)
{
   int exam_times;
   do {exam_times = get_int ("How many exams did you take? ")}
   while (exam_times < 0)
}

