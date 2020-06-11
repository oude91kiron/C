/*
Question 1
The Internet and the web are enabling more people to network, join a cause, voice opinions,
and so on. The presidential candidates in 2019 used the Internet intensively to get out their messages
and raise money for their campaigns. In this exercise, you’ll write a simple polling program
that allows users to rate five social-consciousness issues from 1 (least important) to 10 (most important).
Pick five causes that are important to you (for example, “drinking and driving”; “Global Warming”,
“Air Pollution”, “Deforestation”, “Children in need”).

1.	(5 Points) Use a one-dimensional array topics (of type String) to store the five causes.
To summarize thesurvey responses.

2.	(10 Points) Use a 5-row, 10-column two-dimensional array responses (of type int),
each row corresponding to an element in the topics array.

3.	(10 Points) When the program runs, it should ask 10 users to rate each issue.
                Then have the program display a summary of the results, including:
    a.	(15 Points) A tabular report with the five topics down the left side and the 10 ratings across the top,
                listing in each column the number of ratings received for each topic.
    b.	(15 Points) To the right of each row, show the average of the ratings for that issue.
    c.	(15 Points) Which issue received the highest point total? Display both the issue and the point total.
    d.	(15 Points) Which issue received the lowest point total? Display both the issue and the point total.
*/

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