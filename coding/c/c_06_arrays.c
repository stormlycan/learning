#include <stdio.h>

int main() {
  // Arrays in C
  // This program will demonstrate how to declare, initialize, and use arrays
  int array[5];
  // Declare an array of 5 integers
  // Type the array declaration here
  for (int i = 0; i < 5; i++) {
    array[i] = i * 10;
  }
  // Initialize the array with values
  // Type the array initialization here

  // Print all elements of the array
  printf("Array elements:\n");
  for (int i = 0; i < 5; i++) {
    // Type the code to print each array element here
    printf("Value a index %d is %d\n", i, array[i]);
  }

  // Calculate and print the sum of all array elements
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    // Type the code to add each array element to the sum here
    sum += array[i];
  }
  printf("\nSum of all elements: %d\n", sum);

  // Find and print the maximum value in the array
  int max = array[0];
  for (int i = 1; i < 5; i++) {
    // Type the code to find the maximum value here
    if (array[i] > max) {
      max = array[i];
    }
  }
  printf("Maximum value: %d\n", max);

  return 0;
}
