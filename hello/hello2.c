#include <stdio.h>
#include <cs50.h>

int main (void)
{

   string s = get_string ("Type String here ");

   int i = 0;
   while (s[i]!=0)
   {
      i++;
   }
   printf ("%i\n",i);
}