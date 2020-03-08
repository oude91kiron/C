/*
Exercise 1

Write a function called aveTwo that will
1-	take two integer numbers as input
2-	calculates the average of two numbers
3-	prints the result on the screen

Exercise 2

Modify function aveTwo so that the calculated average will be returned to main
function as an output and calculated average will be printed on the screen in the main function.

*/

#include<stdio.h>

double num1, num2, ave;
double aveTwo(double x, double y);

int main(void) {
    do {
    printf("Please pake the first number: ");
    scanf("%lf", &num1);
    printf("Please pake the second number: ");
    scanf("%lf", &num2);
    } while (num1 < 0 || num2 < 0);

    ave = aveTwo(num1, num2);
    printf("The average of %f and %f is: %f\n", num1, num2, ave);
    return 0;
}

double aveTwo(double x, double y) {
    return (x+y)/2.0;
}