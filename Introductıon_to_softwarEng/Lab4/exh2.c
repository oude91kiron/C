/*---------------------------------------------------------------------------
Write a function called printPattern that will take                         -
a row number n as input and print a triangle with n rows on the screen.     -
For example                                                                 -
If n=3 your function will print                                             -
  X                                                                         -
 XXX                                                                        -
XXXXX                                                                       -
                                                                            -
If n=5 your function will print                                             -
    X                                                                       -
   XXX                                                                      -
  XXXXX                                                                     -
 XXXXXXX                                                                    -
XXXXXXXXX                                                                   -
---------------------------------------------------------------------------*/

#include<stdio.h>

int num=0;
void printPatern(int x);

int main(void) {

do {
    printf("Pake a positive number between 0 and 24: ");
    scanf("%d", &num);
    if(num < 0 || num>= 24) {
        printf("Please ");
    }
    } while(num < 0 || num > 24);

    printf("\n");
    printPatern(num);
}

void printPatern(int rows) {

    int i, j, k=0;

    for (i=1; i<=rows; ++i,k=0)  // k will be equal to zero for every row
    {

        for (j=1; j<=rows-i; ++j)
        {
            printf(" ");
        }

        while (k!=2*i-1)
        {
            printf("*");
            ++k;
        }
        printf("\n");
    }
}

/* c++

#include <iostream>

using namespace std;

int main()
{
    int rows=9;
    int i,j, k=0;
    for (i=1; i<=rows; ++i,k=0){
        for (j=1; j<=rows-i; ++j)
        {
            cout << " ";
        }

        while (k!=2*i-1)
        {
            cout << "*";
            ++k;
        }
        cout << "\n";
    }
    return 0;
}
*/