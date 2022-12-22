#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get credit card number
    long credit_card_number
   do
   {
    credit_card_number = get_long("Number: ");
   }
   while (credit_card_number < 0);

    //qualify
   if (check_validity(credit_card_number))
   {print_credicard_brand(credit_card_number)}
   else
   {printf("Invalid\n")}

   bool check_validity(credit_card_number)
   {
    int length = find_length (credit_card_number);
    return (length == 13 || length == 15 || length == 16) && checksum(credit_card_number)

int find_length (long n)
   }

}