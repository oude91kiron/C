/* 
Write a C program to print the Armstrong Numbers between 0 and 999. 
An n digit number that is equal to sum of nth power of its digits is called an Armstrong Number.
For example An Armstrong number of two digits is an integer such that ab = a2+b2
An Armstrong number of three digits is an integer such that abc = a3 + b3 + c3
For example, 371 is an Armstrong number since 33 + 73 + 13 = 371.

*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{

for(int number=1;number<=999;number++)
{
    int temp=number;
    int digits=0;
    while(temp>0)
    {
        temp=temp/10;
        digits++;
    }

    int sum=0;
    temp=number;
    int d;
    while(temp>0)
    {
        d=temp%10;
        sum=sum+pow(d,digits);
        temp=temp/10;
    }


    if(sum==number)
        cout<<number<<" is an armstrong number\n";

}

    return 0;
}
