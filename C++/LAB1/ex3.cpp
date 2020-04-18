/*
Lab1Ex3:
Write a C program to print the Armstrong Numbers between 0 and 999.
An n digit number that is equal to sum of nth power of its digits is called an Armstrong Number.
For example An Armstrong number of two digits is an integer such that ab = a2+b2
An Armstrong number of three digits is an integer such that abc = a3 + b3 + c3
For example, 371 is an Armstrong number since 33 + 73 + 13 = 371.

Solved by OmerJava
*/

#include <iostream>
#include <math.h> // so we can use pow(x, y) function

using namespace std;    // means that we can use names for objects and variables from the standard library.

int main()
{
  int num, digits_number, sum, digit;     // needed variables

for(int i=0; i<=999; i++)
{
     num=i;
     digits_number=0;  // updated for every number


    for(;num > 0 ;num = num/10)   //  It's just a way of iterating over digits of a number.
        {
        digits_number++;
        }

  /*while(num>0)
    {
        num=num/10;                // another wat to counting the number of digits for every number
        digits_number++;
    }*/

     sum=0;
     num=i;            // reset the number
     digit;

    while( num> 0 && (i < 2 || i > 9))  // skip the numbers between [2 and 9]
    {
        digit=num%10;           // the digits of the number
        sum=sum+pow(digit,digits_number);         // sum digits to the power number of digits
        num=num/10;                            // update the number (delete digits one by one)
    }

    if(i == 0 || i == 1) // way to make the output nice
        cout<<"00"<<i<<" is an armstrong number "<<" And the number of digits is: "<<digits_number<<endl;
    else if(sum == i)
        cout<<i<<" is an armstrong number "<<" And the number of digits is: "<<digits_number<<endl;
}
    return 0;
}
