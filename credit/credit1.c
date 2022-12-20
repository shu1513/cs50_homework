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
    while (x>0)
    {
        x = x/10;
        y++;
    }
    printf("%i\n", y);

    //print invalid,
    //break

    // switch function for card types and card digits
    //print card types if match
    //print invalid if don't match


}