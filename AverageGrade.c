/* A program to gather percentage grades from a user and then determine the average grade */

#include<stdio.h>

int main(){

  int Grade[10];
  int NumberOfGrades;
  int sum;
  float average;

  printf("\nHow many grades would you like to average?\n");
  scanf("%d", &NumberOfGrades);

  for(int count = 1; count <= NumberOfGrades; count++){
    printf("\nPlease enter grade: \n");
    scanf("%d", &Grade[count]);
  }

  printf("\nGrades are:\n");

  for(int counter = 1; counter <= NumberOfGrades; counter++){
    sum = sum + Grade[counter];
    printf("%d\n", Grade[counter]);
  }

  average = sum/NumberOfGrades;
  printf("\nThe average of the grades is:\n");
  printf("%f\n", average);

  return 0;
}
