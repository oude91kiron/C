#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // String array of 5 issues.
string issues[]={"drinking and driving","Global Warming",
                 "Air Pollution", "Deforestation", "Children in need"};
    // Integer array where each row corresponding to an element in the topics array.
int arr[5][10]={{0,0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0,0}};
    // initializing  variables.
int n=10;
int rate=0;
    // iteration loop for 10 users
    while(n!=0){
            // iteration loop to take the rate from the user
        for(int i=0;i<5;i++){
            cout<<issues[i]<<" : ";
            cin>>rate;
            arr[i][rate-1]++;
        }
        n--;
    }
    // print rating scale.
    for(int i=0;i<=10;i++){
        if(i==0){
        cout << left << setw(25) << setfill(' ')<<" ";
        }
        else{
        cout << left << setw(5) << setfill(' ')<<i;
        }
    }

    cout<<endl<<endl;
    int j;
    int maxIndex=-1;
    int maxTotal=-1;
    int minIndex=-1;
    int minTotal=250;
    // iteration loop for 5 issues.
    for(j=0;j<5;j++){
        // print the issues at the first of each row.
        cout << left << setw(25) << setfill(' ') <<issues[j];
        double average=0;

        for(int i=0;i<10;i++){
        //print the data of each row.
        average+=(arr[j][i])*(i+1);
        cout << left << setw(5) << setfill(' ') << arr[j][i];
        }
        // calculate the average.
        if(average>maxTotal){
        maxTotal=average;
        maxIndex=j;
        }

        if(average<minTotal){
        minTotal=average;
        minIndex=j;
        }
        // print the average for each issue.
        cout<<left << setw(3) << setfill(' ') << (average/10);
        cout << endl;
    }
    // print highest point total &  the lowest point total issue.
    cout<<endl;
    cout<<"Highest Point Total: "<<maxTotal<<" Issue: "<<issues[maxIndex]<<endl;
    cout<<"Lowest Point Total: "<<minTotal<<" Issue: "<<issues[minIndex];
    return 0;
}