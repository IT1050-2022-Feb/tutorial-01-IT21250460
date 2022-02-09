/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(int num1, int num2);  //Function declaration for minimum, maximum and multiply
int maximum(int num1, int num2);  
int multiply(int num1, int num2);

int main() 
{
   int no1, no2; //Defining variables
   printf("Enter a value for no 1 : ");//taking inputs for num1 and num2
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));//Function calling for minimum
   printf("%d ", maximum(no1, no2));//Function calling for maximum
   printf("%d ", multiply(no1, no2));//Function calling for multiply
   return 0;
}

int minimum(int num1, int num2)//Function implemenation
{
  if(num1 < num2)
  {
    return num1;
  }
  else
  {
    return num2;
  }
}

int maximum(int num1, int num2)//Function implementation
{
  if(num1 > num2)
  {
    return num1;
  }
  else
  {
    return num2;
  }
}

int multiply(int num1, int num2)//Function implementation
{
  return num1 * num2;
}

