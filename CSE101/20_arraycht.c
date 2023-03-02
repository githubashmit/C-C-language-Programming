#include <stdio.h>

int main() {
   int array[5]; // Declare an integer array of size 5
   int i;

   printf("Enter 5 integers: \n");

   // Take input from the user using scanf()
   for(i = 0; i < 5; i++) {
      scanf("%d", &array[i]);
   }

   // Print the array elements
   printf("Array elements are: ");
   for(i = 0; i < 5; i++) {
      printf("%d ", array[i]);
   }

   return 0;
}
