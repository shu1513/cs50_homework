#include <stdio.h>
#include <cs50.h>

int main (void)
{

   string s = get_string ("Type String here ");

   for (int i = 0; s[i]!= 0; i++)
   {
      printf (i);
   }

}