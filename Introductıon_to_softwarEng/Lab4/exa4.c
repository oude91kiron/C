/*
Exercise 4
Write a function called findMin that will
1-	take three integers as input
2-	find the minimum amongst three numbers
3-	print the minimum on the screen
*/

#include<stdio.h>

int findMin(int x, int y, int z);
int num1, num2, num3;

int main(void) {
    printf("pake the first number: ");
    scanf("%d", &num1);
    printf("pake the second number: ");
    scanf("%d", &num2);
    printf("pake the third number: ");
    scanf("%d", &num3);

    printf("The minimum number is: %d\n", findMin(num1, num2, num3));
    return 0;
}

int findMin(int x, int y, int z) {
    if(x<=y && x<=z)
    return x;
    else if (y<=x && y<=z)
    return y;
    else
    return z;
}