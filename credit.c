#include "cs50.h"
#include <stdio.h>

int main (void)
{
   
    long n = get_long("Number: ");

   
    int sum = 0;
    int count = 0;
    long temp = n;
    long first_two_digits = n;

    
    while (temp > 0)
    {
        int last_digit = temp % 10;

        if (count % 2 == 0)
        {
            
            sum += last_digit;
        }
        else
        {
            
            int product = last_digit * 2;
            sum += (product % 10) + (product / 10);
        }

        
        temp /= 10;
        count++;

        
        if (temp > 9)
        {
            first_two_digits = temp;
        }
    }

    if (sum % 10 == 0)
    {
        int first_digit = first_two_digits / 10;
        
        if (count == 15 && (first_two_digits == 34 || first_two_digits == 37))
        {
            printf("AMEX\n");
        }
        
        else if (count == 16 && (first_two_digits >= 51 && first_two_digits <= 55))
        {
            printf("MASTERCARD\n");
        }
       
        else if ((count == 13 || count == 16) && first_digit == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
         }
    else
    {
        printf("INVALID\n");
    }
 }