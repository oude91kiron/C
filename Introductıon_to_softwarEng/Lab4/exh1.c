/*-----------------------------------------------------------------------------------------------------------------------
Write a function called calculateSeries that will take an floateger number n as input, and calculate                      -
1!/1 + 2!/2 + 3!/3 + ..+ n!/n                                                                                           -
and return the result to the main function. The calculated result will be prfloated on the screen in the main function    -
-----------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>

float n;
float factoryNum(float num);
float calculateSeries(float x);

int main(void) {

    float number=1.0;
    do {
    printf("Insert positive enteger to calculate S=(1!/1)+(2!/2)+....+(n!/n): ");
    scanf("%f", &number);
    if(number < 0 ) {
        printf("Nigative numbers are not acceptable Please ");
    }
    } while(number < 0);

    //float fac = factoryNum(5);
    printf("Your factory number equal to: %f\n", factoryNum(number));

    //float ser = calculateSeries(5);
    printf("Your series equal to: %f\n", calculateSeries(number));
}

float factoryNum(float num) {
    float fac = 1.0;
    for (float i = num; i >=1.0; i--) {
        fac = fac * i;
    }
    return fac;
}

float calculateSeries(float num) {
    float res = 0.0;
    float i = 1.0;

    // for (float i = 1; i <=num; i++) {
    // res = res + (factoryNum(i)/i);  OR

    while ( i <= num) {
        res = res + (factoryNum(i)/i);
        i++;
    }
    return res;
}
