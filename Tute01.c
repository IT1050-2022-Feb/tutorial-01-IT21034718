/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int chemistry,physics ; 
    float Total, Average;

    printf("Please Enter the marks of two subjects: \n");
    scanf("%d%d", &chemistry, &physics);

    Total =  chemistry + physics;
    Average = Total / 2;

    printf("Total Marks = %.2f\n", Total);
    printf("Average Marks = %.2f\n", Average);

  
  return 0;
}

