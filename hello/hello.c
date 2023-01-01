#include <stdio.h>
#include <cs50.h>
#include <string.h>

int get_3_sides (void);

int main (void)
{

}
int get_3_sides (void)
{
   int n;
   do
   {
     n = get_int ("How many exams did you take?  ");
     if (n <= 0)
     {
      printf("The number needs to be a positive number\n");
     }
   }
   while (n <= 0);
   return n;
}