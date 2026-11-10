#include <iostream>
#include <ostream>
#include <string>

// TODO: Write your C++ class definition here
// Follow these steps:
// 1. Define a class called "Person"
// 2. Add private member variables for name (string) and age (int)
// 3. Create a constructor that initializes these variables
// 4. Create public member functions to get and set the name and age
// 5. Create a display function that prints the person's information
class Person {
private:
  std::string name;
  int age;

public:
  Person(std::string n, int a) {
    name = n;
    age = a;
  };
  std::string getName() { return name; }

  void setName(std::string n) { name = n; }

  int getAge() { return age; }

  void setAge(int a) { age = a; }

  void display() {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
  }
};
// After defining the class, create main() function
// 6. Create an instance of Person class
// 7. Use the member functions to set values and display information

int main() {
  // TODO: Implement main function
  Person pe1("John Doe", 22);
  pe1.display();

  pe1.setName("Jane Deer");
  pe1.setAge(32);

  pe1.display();

  std::cout << "Retrived Age: " << pe1.getAge() << std::endl;
  std::cout << "Retrived Name: " << pe1.getName() << std::endl;

  return 0;
}
