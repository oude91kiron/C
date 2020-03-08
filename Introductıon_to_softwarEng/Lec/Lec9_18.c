// This is a simple program just to print the elements of three two dimentional arrays


#include <stdio.h>
#include <stdlib.h>

void printMultidimensionalArray(const int arr[][3], int row, int col);

int main()
{
    //define arrays
    int array1[2][3]={{1,2,3},{4,5,6}};
    int array2[2][3]={{1,2,3},{4,5}};             // valid declaration: int array2[2][3]={1,2,3,4,5};  but the compiler of CS50 ide require a { }
    int array3[2][3]={{1,2},{4}};

    int row=2;
    int col=3;

    printf("Contents of array 1: \n");
    printMultidimensionalArray(array1,row,col);

    printf("Contents of array 2: \n");
    printMultidimensionalArray(array2,row,col);

    printf("Contents of array 3: \n");
    printMultidimensionalArray(array3,row,col);

    return 0;
}

void printMultidimensionalArray(const int arr[][3], int row, int col)
{

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}
