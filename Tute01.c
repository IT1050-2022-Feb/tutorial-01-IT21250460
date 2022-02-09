/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int mark1, mark2; //Defining variables
   int total = 0;
   int average = 0;
   printf("Enter mark for subject 1 - ");  //Taking inputs
   scanf("%d", &mark1);
   printf("Enter mark for subject 2 - ");
   scanf("%d", &mark2);
   total = mark1 + mark2;  /*Calculating total
                                  and average*/
   average = total / 2.0;
   printf("Average mark = %d", average);
  
  return 0;
}

