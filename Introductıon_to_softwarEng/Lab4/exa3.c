/*
Exercise 3

Write a function called calculateSum that will take an integer number n as input, and calculate
1 + 2 + 3 + ..+ n
and return the result to the main function. The calculated result will be printed on the screen in the main function
*/

#include<stdio.h>

int n, res;
int calculateSum(int x);

int main(void) {
    do {
        printf("Pake a positive number for n: ");
        scanf("%d", &n);
    } while( n< 0);

    //var1 = calculateSum(n);
    printf("The result is : %d\n", calculateSum(n));
    return 0;
}

int calculateSum(int x) {

    for(int i=0; i<=x; i++)
    res = res+(x-i);
    return res;
}