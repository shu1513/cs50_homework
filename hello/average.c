#include <cs50.h>
#include <stdio.h>

int get_number_of_exams (void);
double get_average_scores (int times_of_exams);

int main(void)
{
   int number_of_exams = get_number_of_exams ();
   int average_score = get_average_scores (number_of_exams);
   printf ("Your average score is %i\n", average_score);
}

int get_number_of_exams (void)
{
   int exam_times;
   do {exam_times = get_int ("How many exams did you take? ");
   if (exam_times < 0) {
                printf("Please enter a non-negative number.\n");
            }
   while (exam_times < 0);
   return exam_times;
}

double get_average_scores (int times_of_exams)
{
    int sum = 0;
    for (int i = 0; i < times_of_exams; i++)
    {
        do {int score = get_int ("Whats your score for exam %i ?", (i+1));
        if (score < 0) {
                printf("Please enter a non-negative number.\n");
            }
        while (score < 0)
        sum = sum + score
    }
    double average = sum/times_of_exams;
    return average;
}