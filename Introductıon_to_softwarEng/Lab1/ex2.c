/* Exercise 2
Write a C code that will calculate the area (A) and the circumference (C) of a square by using the equations A= L * L and C = 4 * L where L is the length of one side of the square. At the end, the code will print out the area and the circumference in one line,

Note: The value of L will be hardcoded by the user – assign a random value to L.

The “output” of the code should look on the computer monitor as follows:

Area of this square is xxx and the circumference of this square is yyy.
*/

#include<stdio.h> // so we can use printf and scanf functions.

int main() {
	int length, area, circu; // defining variables
	printf("Please pake the length of one side of the square between 1 and 100:\n");  //ask user to insert a number
	scanf("%d", &length);   // save the user input to the length variable
	area = length * length; // math rule
	circu = 4 * length;      // math rule
	if (length<=0 || length>100){   // we don't want the user to insert a negative number or very large number
		printf("The length should be between 1 and 1000\n");
	}
	else { // print the output of the program
		printf("Area of this square is: %d and the circumference of this square is: %d", area, circu);
		return 0;
	}
}