#include <iostream>

using namespace std;

int main()
{
    int rows=9;
    int i,j, k=0;
    for (i=1; i<=rows; ++i,k=0){
        for (j=1; j<=rows-i; ++j)
        {
            cout << " ";
        }

        while (k!=2*i-1)
        {
            cout << "*";
            ++k;
        }
        cout << "\n";
    }
    return 0;
}