/* Write a program in C++ to make such a pattern like a pyramid with numbers increased by 1.
   1
  2 3
 4 5 6
7 8 9 10
*/

#include <iostream> // input/output stream library


using namespace std;   // means that we can use names for objects and variables from the standard library.

int main()
{
    int spc=4;
    int val=1;
    int rows=5;

    for(int i=0;i<rows;i++)
    {
        for(int j=0; j<spc;j++){ // print 4 space at the first line
            cout<<" ";
        }
        spc--;  // decrease spaces number by 1


        for(int n=0; n<i; n++) // print the first value "1" followed by space
        {
            cout<<val<<" ";
            val++; // update the value every time after printing it
        }

        // val++; // update the value every new line so the result would be (replace the spaces with * just for debugging your code )
        // ****
        // ***2*
        // **3*3*
        // *4*4*4*
        // 5*5*5*5*
        cout<<"\n"; // start new line.
    }



    return 0;
}
