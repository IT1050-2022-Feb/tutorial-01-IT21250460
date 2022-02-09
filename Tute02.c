/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() 
{
  float distance, remaining;            //defining variables
  float amount, remaining_amount, total;
  printf("Enter distance travelled:");  //Taking inputs
  scanf("%f", &distance);

  if(distance <= 30) //Nested if else statement to calculate cost
  {
    amount = distance * 50;
    printf("Total amount = %.2f", amount);
  }
  else if(distance > 30)
  {
    amount = 30 * 50;
    remaining =  distance - 30;
    remaining_amount = remaining * 40;
    total = amount + remaining_amount;
    printf("Total amount = %.2f", total);
  }
  else
  {
    printf("Invalid value");
  }
  
  return 0; //End of function
}
