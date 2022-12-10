#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int points = get_int("How many points did you lose? ")

    if (points < 2)
    {
        printf("good job! \n")
    }
    else if (points >2)
    {
        printf("You have lost a lot of points! \n")
    }
}
