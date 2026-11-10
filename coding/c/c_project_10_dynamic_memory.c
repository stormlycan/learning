#include <stdio.h>
#include <stdlib.h> // For malloc, calloc, free

int main() {
  // Dynamic Memory Allocation in C
  // This program will demonstrate how to allocate and free memory at runtime

  int n;
  int *ptr;

  // Ask the user for the number of elements
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  // Allocate memory for n integers using malloc
  // Type the code to allocate memory here
  ptr = (int *)malloc(n * sizeof(int));
  // Check if memory allocation was successful
  if (ptr == NULL) {
    printf("Memory allocation failed!\n");
    return 1; // Exit with error code
  }

  // Initialize the allocated memory
  for (int i = 0; i < n; i++) {
    ptr[i] = i * 10;
  }

  // Print the allocated memory contents
  printf("\nAllocated memory contents:\n");
  for (int i = 0; i < n; i++) {
    // Type the code to print each element here
    printf("ptr[%d] = %d\n", i, ptr[i]);
  }

  // Free the allocated memory
  // Type the code to free the memory here
  free(ptr);
  // Allocate memory for n integers using calloc (initialized to 0)
  // Type the code to allocate memory with calloc here
  ptr = (int *)calloc(n, sizeof(int));
  // Check if memory allocation was successful
  if (ptr == NULL) {
    printf("Memory allocation failed!\n");
    return 1; // Exit with error code
  }

  // Print the calloc-allocated memory contents (should be all 0s)
  printf("\nCalloc-allocated memory contents (should be all 0s):\n");
  for (int i = 0; i < n; i++) {
    // Type the code to print each element here
    printf("ptr[%d] = %d\n", i, ptr[i]);
  }

  // Free the calloc-allocated memory
  // Type the code to free the memory here
  free(ptr);
  return 0;
}
