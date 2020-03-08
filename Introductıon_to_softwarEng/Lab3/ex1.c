/* Exercise 1
Write a C program to check whether a number is divisible by 5 and 12 or not using if else statements.
*/

#include<stdio.h>

int main(void) {
    int number;
            do {
            printf("Please pake a number between 0 and 1000: ");
            scanf("%d", &number);

            } while ( number<0 ); // only postive number


            if (number % 5 == 0 && number % 12 == 0)
            {
                 printf("The number divisible by 5 & 12\n");
            }
                else if (number % 5 == 0)
            {
                 printf("The number divisible only by 5 \n");
            }
                else if (number % 12 == 0) {
                 printf("The number divisible only by 12\n");
            }
                else
            {
                 printf("The number not divisible by 5 or 12.\n");
            }
        }