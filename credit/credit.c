#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int x;
   do
   {
    x = get_int("Number: ");
   }
   while (x < 1);

    //booleon valid or not checksum()
    int y;
    y = x/100;

    printf("%i\n", y);
    //print invalid,
    //break

    // switch function for card types and card digits
    //print card types if match
    //print invalid if don't match


}