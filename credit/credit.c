#include <cs50.h>
#include <stdio.h>

int main(void)
{
   long x;
   do
   {
    x = get_int("Number: ");
   }
   while (x < 0);

    //booleon valid or not checksum()
    int y = 0;
    for (x; x > 0; x/10)
    {
        y = y + 1;
    }
    printf("%i\n", y)

    //print invalid,
    //break

    // switch function for card types and card digits
    //print card types if match
    //print invalid if don't match


}