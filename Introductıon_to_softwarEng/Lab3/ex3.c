
#include<stdio.h>

int main(void) {
    int grade;
    do {
    printf("What is your grad: ");
    scanf("%d", &grade);
    } while (grade > 100 || grade < 0); // integer between 0 and 100

    if (grade<=100 && grade >= 90)
    printf("Your grade is %d on the exam and yor grad is A\n", grade);
    else if (grade<=89 && grade >= 80)
    printf("Your grade is %d on the exam and yor grad is B\n", grade);
    else if (grade<=79 && grade >= 70)
    printf("Your grade is %d on the exam and yor grad is C\n", grade);
    else if (grade<=69 && grade >= 60)
    printf("Your grade is %d on the exam and yor grad is D\n", grade);
    else
    printf("Your grade is %d on the exam and yor grad is F\n", grade);
}