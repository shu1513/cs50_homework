#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long credit_card_number
   do
   {
    credit_card_number = get_long("Number: ");
   }
   while (credit_card_number < 0);

   if (check_validity(credit_card_number))
   {print_credicard_brand(credit_card_number)}
   else
   {printf("Invalid\n")}

   bool check_validity(credit_card_number)
   {
    
   }

}