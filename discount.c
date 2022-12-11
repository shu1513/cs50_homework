#include <cs50.h>
#include <stdio.h>


float discount(float y);

int main (void)
{
    float x = get_float("Regular price: ");
    float y = get_float("Perfect Off: ");
    float z = discount()
    printf("sale price is %.2f\n", z);
}

float discount_conversion(float y)
{
    return x * (100-y)/100;
}