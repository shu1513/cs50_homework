#include <cs50.h>
#include <stdio.h>

void print_credicard_brand(long credit_card_number);
bool check_validity(long credit_card_number);
bool checksum(long ccn);
int find_length (long n);

int main(void)

{
    //get credit card number
    long credit_card_number;
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

}

   bool check_validity(long credit_card_number)
   {
    int length = find_length (credit_card_number);
    return (length == 13 || length == 15 || length == 16) && checksum(credit_card_number)
   }

   int find_length (long n)
   {
    int len;
    for (int leng = 0; n!=0; n/=10)
    len++;
    return len;
   }

   bool checksum(long ccn)
   {
        int sum = 0;
        for (i = 0; ccn! = 0; i++, ccn /= 10)
        {
            if (i%2==0)
            {
                sum += cnn%10
            }
            else
            {
                int digit = 2*(ccn % 10)
                sum = sum + (digit / 10 + digit % 10)
            }
        }
        return (sum%10) == 0
   }
    void print_credicard_brand(long credit_card_number)
    {
        if ((ccn >= 34e13 && ccn<35e13) || (ccn >= 37e13 && ccn <= 37e13))
        {
            printf("AMEX\n")
        }
        else if (ccn >=51e14 && cnn < 56e14)
        {
            printf("Mastercard\n")
        else if ((ccn >= 4e12 && ccn < 5e14) ||(ccn >= 4e15 && ccn < 5e16))
        {
            printf("VISA")
        }
        else printf("INVALID")
        }
    }

