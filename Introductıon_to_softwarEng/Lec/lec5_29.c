/* Problem:  Write a program that calculates the average exam grade for a class of students.
What are the program inputs?
the number of the students
the exam grades
What are the program outputs?
the average exam grade
 */

#include <stdio.h>
int main ( )
{
 	int  numStudents, counter, grade, total, average ;
 	total = 0 ;
 	counter = 0 ;
        printf ("Enter the number of students: ") ;
        scanf ("%d", &numStudents) ;
 	while ( counter <= numStudents) {
 	     printf ("Enter a grade :") ;
 	     scanf ("%d", &grade) ;
 	     total = total + grade ;
 	     counter = counter + 1 ;
 	}
 	average = total / numStudents ;
 	printf ("Class average is: %d\n", average) ;
        return 0 ;
}
