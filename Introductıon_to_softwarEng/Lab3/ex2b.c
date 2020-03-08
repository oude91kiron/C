/*
Lab3-Exercise 2
The user is looking for an apartment to buy. His criteria is: price has to be 400000 liras or cheaper than that , the apartment has to be 10 years or younger, and it has to have at least 3 rooms. Write a code which takes 3 inputs: price, age and number of rooms and specifies if the input meets the user’s criteria or not.

Enter price, age and the number of rooms > 410000, 11, 5
Price and age are too high

Or

Enter price, age and the number of rooms > 400000, 8, 3
Criteria satisfied

*/

#include<stdio.h>

int main(void) {
    int price, age, rooms;

    printf("Instert the price of the apartment: ");
    scanf("%d", &price);
    printf("Insert the age of the appartment: ");
    scanf("%d", &age);
    printf("How many rooms of the apartment: ");
    scanf("%d", &rooms);

    if (price <= 400000) {
        if (age <= 10) {
            if(rooms >= 3){
                printf("Every thing is okey\n");
            }
            else{
                printf("rooms not enough!\n");
            }
        } else {
            if(rooms >= 3){
                printf("apart too old\n");
            }
            else{
                printf("apart to old and rooms not enough!\n");
            }
        }
    } else {
        if (age <= 10) {
            if(rooms >= 3){
                printf("apart too expencive\n");
            }
            else{
                printf("apart too expencive and rooms not enough!\n");
            }
        } else {
            if(rooms >= 3){
                printf("apart to expencive and to old\n");
            }
            else{
                printf("apart to expencive and too old and rooms not enough!\n");
            }
        }
    }
}