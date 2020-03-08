/*
write C programs asking the user to enter the elements for a 2D array and
1. calculate the sum of each row elements and print it on the screen
2. calculate the sum of the elements for the Diameter and print it on the screen

example:
input:
1 2 3
4 5 6
7 8 9
outpt:
The sum for the element of the row number 1 is: 6
The sum for the element of the row number 2 is: 15
The sum for the element of the row number 3 is: 24
The sum for the element of the Diameter is: 15
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
  int arr[3][3];
  int sumR = 0;
  int sumD = 0;

  for(int i=0; i<3; ++i){
    for(int j=0; j<3; ++j){
      printf("Enter the element number %d of the row number %d: ",j+1, i+1);
      scanf("%d",&arr[i][j]);
    }
  }

  for(int i=0; i<3; ++i){
    for(int j=0; j<3; ++j){
      sumR += arr[i][j];
    }
    printf("The sum for the element of the row number %d is: %d\n", i+1, sumR);
    sumR = 0;  // 1st pug: forgot it
  }

    for(int i=0; i<3; ++i){
      for(int j=0; j<3; ++j){
        if(i==j){                   // if(i+j%2 == 0)  2ed pug: wrong stetment
      sumD += arr[i][j];
        }
      }
      //       printf("The sum for the element of the Diameter is: %d\n", sumD); 3rd pug: wrong place
  }
      printf("The sum for the element of the Diameter is: %d\n", sumD);
  return 0;
}