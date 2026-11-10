#include <stdio.h>

// Function declaration (prototype)
// Declare a function that takes two integers and returns their sum
// Type the function declaration here
int add_numbers(int a, int b);

int main() {
  // Functions in C
  // This program will demonstrate how to create and use functions

  int a = 5, b = 3;
  int result;

  // Call the function to add two numbers
  result = add_numbers(a, b);

  // Display the result
  printf("%d + %d = %d\n", a, b, result);

  // Call the function with different numbers
  result = add_numbers(10, 7);
  printf("%d + %d = %d\n", 10, 7, result);

  return 0;
}

int add_numbers(int a, int b) { return a + b; }
// Function definition
// Define the function that takes two integers and returns their sum
// Type the function definition here
