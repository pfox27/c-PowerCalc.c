/* A program to calculate the discount for items purchased in bulk. */

#include<stdio.h>

int main(){

  int purchase;
  float total, discount;

  printf("\nPlease enter a purchase value in dollars: \n");
  scanf("%d", &purchase);
  discount = (purchase >= 5000) ? (purchase * 0.05): ((purchase < 1000) ? (purchase * 0.01): (purchase * 0.02));
  total = purchase - discount;
  printf("The discount is: %7.2f \n", discount);
  printf("The total is: %8.2f \n", total);

  return 0;
  
}
