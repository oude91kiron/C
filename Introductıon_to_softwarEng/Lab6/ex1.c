/*
Exercise 1
Write a C code that will ask the user to enter 10 integer numbers and store them in an array; Then print contents of array on the screen.
•	Use a loop to read the numbers from the user and store them in the array.
•	Use another loop to print the contents of array on the screen.
*/

#include<stdio.h>

int main(void){
    int array[10];
    int i;

    for(i=0; i<10; ++i){
        printf("Please enter the element %d:", i+1);
        scanf("%d", &array[i]);
    }

    for(i=0; i<10; ++i){
        printf(" element %d is: %d\n", i+1, array[i]);
    }
    return 0;
}