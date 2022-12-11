#include <cs50.h>
#include <stdio.h>


float discount(float y);

int main (void)
{
    float x = get_float("Regular price: ");
    float z = get_float("How many percent off for sales discount ");
    float a = x * (100-z)/100;
    printf("sale price is %.2f\n", a);
}

float discount_conversion(float y)
{
    return y *.85;
}