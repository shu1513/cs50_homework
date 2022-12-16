#include <cs50.h>
#include <stdio.h>


float discount(float a,float b);

k
    float x = get_float("Regular price: ");
    float y = get_float("Perfect Off: ");
    float z = discount(x,y);
    printf("sale price is %.2f\n", z);
}

float discount(float a, float b)
{
    return a * (100-b)/100;
}