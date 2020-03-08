/*
Exercise 2
Write a modification of first exercise such that while printing the contents of the array the even numbers will be printed first line and odd numbers will be printed on the second line.
i.e. assuming user has entered
1
3
5
7
8
10
12
20
23
0
*/

#include<stdio.h>

int main(void){
    int array[10];
    int i;

    for(i=0; i<10; ++i){
        printf("Please enter the element %d:", i+1);
        scanf("%d", &array[i]);
    }

    printf("Even Numbers: ");
    for(i=0; i<10; ++i){
        if(array[i]%2==0){
        printf("%d ", array[i]);
        }
    }
    printf("\n");
    printf("Odd Numbers: ");
    for(i=0; i<10; ++i){
        if(array[i]%2!=0){
        printf("%d ", array[i]);
        }
    }
    printf("\n");
    return 0;
}