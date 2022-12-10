#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int shu_points = 2;
    int points = get_int("How many points did you lose? ");

    if (points < shu_points)
    {
        printf("good job! \n");
    }
    else if (points > shu_points)
    {
        printf("You have lost a lot of points! \n");
    }
    else
    {
        printf("we have the same points. \n");
    }
}
