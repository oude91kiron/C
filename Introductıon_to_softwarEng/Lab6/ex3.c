
#include<stdio.h>

int main(void){
    int array[10];
    int sum=0;
    int i=0;

        for (i = 0; i < 10; ++i){
        printf("Please enter the element %d:", i+1);
        scanf("%d", &array[i]);
        }

        for (i = 0; i < 10; ++i){
        sum += array[i];
        }
        printf("The sum of the elements is: %d\n", sum);
        return 0;
}