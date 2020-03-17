/*
Lab1Ex3:
Write a C program to print the Armstrong Numbers between 0 and 999.
An n digit number that is equal to sum of nth power of its digits is called an Armstrong Number.
For example An Armstrong number of two digits is an integer such that ab = a2+b2
An Armstrong number of three digits is an integer such that abc = a3 + b3 + c3
For example, 371 is an Armstrong number since 33 + 73 + 13 = 371.
*/

#include <iostream>
using namespace std;

int main()
{

  int temp, num, digit, sum; // initializing variables


  for(int i = 0; i < 999; i++)
  {
        sum = 0; // initializing variables
        num = i;

        for(;num > 0 ;num = num/10)   //  It's just a way of iterating over digits.
        {
            digit = num % 10;
            sum = sum + digit * digit * digit; // update the sum variable
        }

        if(sum == i) // check if the result equal to the number
        {
            cout <<i<<" The number is armstrong number"<< endl;
        }
  }

  return 0;
}
