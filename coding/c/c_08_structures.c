#include <stdio.h>
#include <string.h> // For strcpy function

// Define a structure for a Student
// Type the structure definition here
struct Student {
  char name[50];
  int age;
};

int main() {
  // Structures in C
  // This program will demonstrate how to define and use structures

  // Declare a variable of type Student
  // Type the variable declaration here
  struct Student student;
  // Initialize the structure members
  // Type the code to initialize the name and age here
  strcpy(student.name, "Bake good");
  student.age = 34;
  // Print the student information
  printf("Student Information:\n");
  printf("Name: %s\n", student.name);
  printf("Age: %d\n", student.age);

  // Create an array of structures
  struct Student students[3];

  // Initialize the array of structures
  // Type the code to initialize the first student here
  strcpy(students[0].name, "noter Dame");
  students[0].age = 22;
  // Type the code to initialize the second student here
  strcpy(students[1].name, "Make beilf");
  students[1].age = 26;

  // Type the code to initialize the third student here
  strcpy(students[2].name, "kwown Fault");
  students[2].age = 25;

  // Print all students
  printf("\nAll Students:\n");
  for (int i = 0; i < 3; i++) {
    // Type the code to print each student's information here
    printf("Name : %s, age : %d\n", students[i].name, students[i].age);
  }

  return 0;
}
