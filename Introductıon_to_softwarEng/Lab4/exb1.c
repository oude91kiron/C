/*

Exercise 1

Write a C code that will print the following output:

0	0
1	3
2	9
3	27
4	81
5	243

Note: you have to use loops!

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c;
    int num1 = 0;
    int num2 = 1;
    for(r=1;r<7;r++)
    {
        for(c=1;c<3;c++)
        {
            if(c==1) {
            printf("  %d   ", num1);
            num1++;
            }
            else if(r-c==-1) {
            printf("0");
            }
            else{
                num2*=3;
                printf("%d", num2);
            }
        }
        printf("\n");
    }
    return 0;
}
