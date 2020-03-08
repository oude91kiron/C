/*
Exercise 1

A parking garage charges $2.00 minimum fee to park for up to three hours and an additional $0.5 per hour for each hour. The maximum charge for any given 24-hour period is $10.00. Assume that no car parks for longer than 24 hours at a time. Write a program that will calculate and prfloat the parking charge for a customer.

1)	Write a function called calculateCharge that will take number of hours and input and return parking charge as an output.
2)	In the main function:
a.	Ask the user to enter number of hours
b.	Call calculateCharge function to calculate the parking charge
c.	Prfloat the returned parking charge on the screen.
*/

#include<stdio.h>
int counter;
double calculateCharge(double hours);

int main(void) {
    double hours = 0.0;
    double res = 0.0;
    do {
    printf("How many hours you want to parking: ");
    scanf("%lf", &hours);
    } while(hours < 0);
    res = calculateCharge(hours);
    printf("------------Fatura No: 00045805480%d------------\n", counter);
    printf("You will be charged only %f $.\n", res);

}

double calculateCharge(double hours) {

    double res = 0.0;
    counter = counter + 1;
    if (hours <= 3.0)
        res = 2.0;
    else if (hours > 3.0 && hours < 24.0)
        res = 2.0 + ((hours - 3.0)/2.0);
    else
        res = 10.0;
return res;
}