/* Write a program in C++ to make such a pattern like a pyramid with numbers increased by 1.
   1
  2 3
 4 5 6
7 8 9 10
*/

#include <iostream> // input/output strem

using namespace std;

int main()
{
    int space=3;
    int val=1;
    int rows=4;

    for(int i=1;i<=rows;i++)
    {
        for(int s=1;s<=space;s++)
            cout<<" ";

        space--;


        for(int n=1;n<=i;n++)
        {
            cout<<val<<" ";
            val++;
        }


        cout<<"\n";
    }



    return 0;
}
