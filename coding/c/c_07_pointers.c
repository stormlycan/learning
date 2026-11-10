#include <stdio.h>

int main() {
  // Pointers in C
  // This program will demonstrate how to declare, initialize, and use pointers

  int number = 42;
  int *ptr;

  // Assign the address of number to the pointer
  // Type the code to assign the address here
  ptr = &number;
  // Print the value of number and the value pointed to by ptr
  printf("Value of number: %d\n", number);
  printf("Value pointed to by ptr: %d\n", *ptr);

  // Print the address of number and the value of ptr
  printf("Address of number: %p\n", &number);
  printf("Value of ptr: %p\n", ptr);

  // Change the value of number through the pointer
  // Type the code to change the value through the pointer here
  *ptr = 1203;
  // Print the new value of number
  printf("\nAfter changing through pointer:\n");
  printf("Value of number: %d\n", number);

  // Demonstrate pointer arithmetic
  int numbers[] = {1, 2, 3, 4, 5};
  int *ptr_to_array = numbers; // Array name is a pointer to its first element

  printf("\nPointer arithmetic:\n");
  for (int i = 0; i < 5; i++) {
    // Type the code to print each element using pointer arithmetic here
    printf("numbers[%d] = %d\n", i, *ptr_to_array);
    ptr_to_array += 1;
  }

  return 0;
}
