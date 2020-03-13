/*
Write a program in C++ to print the Floyd's Triangle. 
1
01 
101
0101 
10101

*/

#include <iostream>

using namespace std;

int main()
{
    int nr=4;
    int val;

    for(int i=1;i<=nr;i++)
    {
        if(i%2==1)
            val=1;
        else
            val=0;

        for(int c=1;c<=i;c++)
        {
            cout<<val;

            if(val==0)
                val=1;
            else
                val=0;

        }
        cout<<"\n";
    }

    return 0;
}
