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

    if (price <= 400000 && age<= 10 && rooms >= 3) {
        printf("Criteria satisfied\n");
    }
    else if (price <= 400000 && age<= 10 && rooms < 3){
        printf("Rooms not enogh for my family!\n");
    }
    else if (price <= 400000 && age> 10 && rooms >= 3){
        printf("The apartment too old!\n");
    }
    else if (price <= 400000 && age> 10 && rooms < 3){
        printf("Rooms not enogh for my family and the apartment too old\n");
    }
    else if (price > 400000 && age<= 10 && rooms >= 3){
        printf("The apartment to expincive!\n");
    }
    else if (price > 400000 && age> 10 && rooms >= 3){
        printf("expensive and too old\n");
    }
    else if (price > 400000 && age<= 10 && rooms < 3){
        printf("expensive and not enough rooms\n");
    }
    else if (price > 400000 && age> 10 && rooms >= 3){
        printf("expensive and too old and not enough rooms\n");
    }
}