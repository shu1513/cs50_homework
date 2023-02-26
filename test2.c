#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a = malloc((sizeof(int)));
    *a = 20;
    printf("%i \n", *a);
   

}