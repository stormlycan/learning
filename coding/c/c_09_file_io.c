#include <stdio.h>

int main() {
  // File I/O in C
  // This program will demonstrate how to write to and read from files

  // Declare a file pointer
  FILE *file;

  // Open a file for writing
  // Type the code to open the file here
  file = fopen("example.txt", "w");
  // Check if the file was opened successfully
  if (file == NULL) {
    printf("Error opening file!\n");
    return 1; // Exit with error code
  }

  // Write some text to the file
  // Type the code to write to the file here
  fprintf(file,
          "Hello This is first line in a file can i add random nonsense. Sure");
  fprintf(file, "Is the coding being simpler than before. Don't know it is "
                "practice or something else");
  // Close the file
  // Type the code to close the file here
  fclose(file);
  // Open the file for reading
  // Type the code to open the file for reading here
  file = fopen("example.txt", "r");
  // Check if the file was opened successfully
  if (file == NULL) {
    printf("Error opening file for reading!\n");
    return 1; // Exit with error code
  }

  // Read and display the contents of the file
  printf("\nContents of the file:\n");
  char buffer[100];
  while (fgets(buffer, 100, file) != NULL) {
    // Type the code to print each line from the file here
    printf("%s\n", buffer);
  }

  // Close the file
  // Type the code to close the file here
  fclose(file);
  return 0;
}
