/*
Exercise 3

Write a function called integerPower(base,exponent) that returns the value of
baseexponent
For example integerPower(3, 4)  should calculate 34 . Assume that exponent is a positive, nonzero integer, and base is an integer. Function integerPower should use loops to calculate baseexponent . Do not use math library functions like pow.
*/

#include<stdio.h>

int b, p;
int paw(int x, int y); // function to calculate x^y

int main(void) {

    printf("please pake a positive nonzero numeber: ");
    scanf("%d", &b);
    printf("please pake a positive nonzero numeber as a power: ");
    scanf("%d", &p);

    int res = paw(b, p);
    printf("Result of %d to the power %d is: %d\n", b,p,res);
}

int paw(int x, int y) {
    int fres=x;
    for (int i = 1; i< y; i++) {
        fres = fres * x;
    }
    return fres;
}