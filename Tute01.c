/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int marks1, marks2;
  float average;

  scanf("%d %d", &marks1, &marks2);
  average=(marks1+marks2)/2;
  printf("Average: %f\n", average);
  
  return 0;
}

