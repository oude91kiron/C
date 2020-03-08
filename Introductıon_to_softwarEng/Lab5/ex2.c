/*
Exercise 2

Write a function called calculateHypotenuse that calculates the length of the hypotenuse of a right triangle when the other two sides are given as input.  This function should take two floating point inputs that are the sides of the tringle and return a floating point number as an output that is the hypotenuse of the triangle.
In the main function;
a)	ask the user to enter two sides for the triangle;
b)	call calculateHypotenuse function to calculate the hypotenuse of triangle;
c)	print the returned hypotenuse on the screen.
*/

#include<stdio.h>
#include<math.h>

float s1, s2, hyp;
float calculateHyp(float x, float y);
int main(void) {
    do {
    printf("What the length of the first side: ");
    scanf("%f", &s1);
    printf("What the length of the second side: ");
    scanf("%f", &s2);
    } while (s1 < 0 || s2 < 0);

    float res = calculateHyp(s1, s2);
    printf("The length of the hypotenuse is: %f \n", res);

    return 0;
}

float calculateHyp(float x, float y) {
    float res;
    res = sqrt((x*x)+(y*y));
    return res;
}
