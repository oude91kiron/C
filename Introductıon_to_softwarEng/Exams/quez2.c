
#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int arr[10];
    int sumE = 0;
    int sumO = 0;
    int i;

    for (i=0; i<10; ++i) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(i=0; i<10; ++i){
        if(i % 2 == 0){
            sumE = sumE + arr[i];
        }
        else {
            sumO = sumO + arr[i];
        }
    }
    printf("the sum of even index elements is: %d\n", sumE);

    for(i=0; i<10; ++i){
        if(i % 2 == 0){
        printf("%d ", arr[i]);
        }
    }
    printf("\n");

       // or we can do:
    for(i=0; i<10; ++i){
        if(i % 2 != 0){
            sumO = sumO + arr[i];
        }
    }

    printf("the sum of odd index elements is: %d\n", sumO);
/*
    for(i=0; i<10; ++i){
        if(i % 2 != 0){
        printf("%d ", arr[i]);
        }
    }
*/
    printf("\n");
    return 0;
}

/*
Example about the two dimentional array

int main ()
{
     int i, j;
     int studentGrades [3][4] = { {77, 68, 86, 73}, {96, 87, 89, 78}, {70, 90, 86 ,81} };
     int lowestGrade= 101;

     for (i=0; i < 4; i++)
     {
	    for (j=0; j < 3; j++) {
                     if(studentGrades[j][i] < lowestGrade)
		lowestGrade = studentGrades [j][i];
	    }
	}
    printf("The lowest grade is %d\n", lowestGrade);
    return 0;
}
*/