#include <stdio.h>

int main() {
  // Variables and Input in C
  // This program will ask for your name and age, then display them

  // Declare variables
  // Declare a character array for name (up to 50 characters)
  char name[50];
  // Declare an integer variable for age
  int age;
  // Ask for user input
  printf("What is your name? ");
  // Type the scanf function to read the name here
  scanf("%s", name);

  printf("How old are you? ");
  // Type the scanf function to read the age here
  scanf("%d", &age);
  // Display the information
  printf("\nHello, %s! You are %d years old.\n", name, age);

  return 0;
}
