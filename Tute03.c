/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  int n;          //Defining variables
  int total = 0;
  int count = 1;
  printf("Enter value:"); //Taking inputs
  scanf("%d", &n);

  while (count <= n)    //While loop
  {
    total = total + count;
    count = count + 1;
  }
  printf("Total = %d", total);
  
  return 0;//End of function
}

