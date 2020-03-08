/* Exercise 2

Write a code that will read the number of coins a person has in his pocket, and calculates and prints on the monitor how much money this person has at the end of the program.

Note: The money amount should be printed as whole numbers and change (for example, 5 lira and 55 kurus)
(Hint: modulus operator, %)

The “output” of the code should look on the computer monitor as follows:

Enter the number of  1 LIRA   > 3
Enter the number of 50 kurus  > 5
Enter the number of 25 kurus  > 2
Enter the number of 10 kurus  > 1
Enter the number of  5 kurus  > 0

You have 6 lira and 10 kurus in your pocket
 */

#include<stdio.h>
#include<stdlib.h>

int main() {

	int num_lira, num_k50, num_k25, num_k10, num_k5, num_k1;

	printf("Please enter number of liras:\n");
	scanf("%d",&num_lira);
	printf("Please enter number of 50 kurus:\n");
	scanf("%d",&num_k50);
	printf("Please enter number of 25 kurus:\n");
	scanf("%d",&num_k25);
	printf("Please enter number of 10 kurus:\n");
	scanf("%d",&num_k10);
	printf("Please enter number of 5 kurus:\n");
	scanf("%d",&num_k5);
	printf("Please enter number of  kurus:\n");
	scanf("%d",&num_k1);

	int kurus_total = num_lira * 100 + num_k50 * 50 + num_k25 * 25 + num_k10 * 10 + num_k5 * 5 +
	num_k1;

	int liras = kurus_total / 100;
	int kurus = kurus_total % 100;

	printf("You have %d liras and %d kurus\n",liras, kurus);
	return 0;
}