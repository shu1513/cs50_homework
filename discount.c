#include <cs50.h>
#include <stdio.h>


float discount(float y);

int main (void)
{
    float x = get_float("Regular price: ");
    float z = discount(x);
    printf("sale price is %.2f/n", z);
}

float discount(float y)
{
    return y *.85;
}