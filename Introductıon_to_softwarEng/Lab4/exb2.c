
#include<stdio.h>

int main(void) {

    for (int i=1; i<101; i++) {
        for(int j=1; j<9; j++) {
            if (j%4==0)
            printf("O");
            else
            printf("X");
        }
        printf("\n");
        //printf("%d\n", i);
    }
    return 0;
}