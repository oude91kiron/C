/*
1.	Write C code for a program that works on the array  [1, 5, 20, 23, 45, 62, 91, 93, 95] as in the example below.
Enter the number that you are looking for:
>> 16
16 does not exist in the array.
Enter another number:
>> 23
23 exists in the array. It is in entry#4.
Enter another number:
*/

#include <stdio.h>
#include <stdlib.h>

int lookFor(int arr[], int number, int L)


int main()
{
int arr[9]={1, 5, 20, 23, 45, 62, 91, 93, 95};
int L=9;
int number;
printf("Enter the number that you are looking for: ");
scanf("%d",&number);
int entry = lookFor(arr,number,L);
if(entry==-1)
    printf("% d does not exist in the array",number);
else
    printf("%d exists in the array in entry %d \n",number,entry);

    while(1)
    {
        printf("\nEnter another number: ");
        scanf("%d",&number);
        int entry = lookFor(arr,number,L);
        if(entry==-1)
            printf("% d does not exist in the array",number);
        else
            printf("%d exists in the array in entry %d \n",number,entry);
    }
}

int lookFor(int arr[], int number, int L)
{
    int i;
    int entry=-1;
    for(i=0;i<L;i++)
    {
    if(arr[i]==number)
        entry=i;
    }
    return entry;
}
