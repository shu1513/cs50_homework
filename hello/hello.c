#include <stdio.h>
#include <cs50.h>
#include <string.h>

string check_valid (int array[]);
void get_sides (int array[]);

int main (void)
{
    int sides[3];
    get_sides (sides);

    string x;
    x = check_valid (sides);
    printf("%s\n", x);
}

string check_valid (int array[])
{
    if ((array[0]+ array[1]) > array[2] && (array[1] + array[2]) > array[0] && (array[2] + array[0]) > array[1])
    {
        return ("This is valid triangle");
    }
    else
    {return ("this is not valid");}
}

void get_sides(int array[])
{
    for (int i = 0; i < 3; i++)
    {
        do {
            array[i] = get_int("What's the length of side %i ?  ", (i+1));
            if (array[i] <= 0)
            {
                printf("side %i lengh needs to be a positive integer.\n", (i+1));
            }
            }
        while (array[i] <= 0);
    }
}