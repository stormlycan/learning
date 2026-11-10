#include <iostream>
#include <ostream>
#include <string>

class Person {
private:
  std::string name;
  int age;
  static int objectCount;

public:
  Person() {
    name = "Unknown";
    age = 0;
    objectCount++;
    std::cout << "Default Constructor called for person Object #" << objectCount
              << std::endl;
  }

  Person(std::string n, int a) {
    name = n;
    age = a;
    objectCount++;
    std::cout << "Parameterized Constructor called for Person Object #"
              << objectCount << std::endl;
  }

  Person(const Person &other) {
    name = other.name;
    age = other.age;
    objectCount++;
    std::cout << "Copy constructor called for Person object #" << objectCount
              << std::endl;
  }
  ~Person() {
    std::cout << "Destructor called for Person object with name: " << name
              << std::endl;
    objectCount--;
  }

  std::string getName() { return name; }

  void setName(std::string n) { name = n; }

  int getAge() { return age; }

  void setAge(int a) { age = a; }

  void display() {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
  }

  static int getObjectCount() { return objectCount; }
};

int Person::objectCount = 0;

int main() {
  std::cout << "=== Demonstrating Constructors and Destructors ==="
            << std::endl;

  // Create objects using different constructors
  std::cout << "\n1. Creating object with default constructor:" << std::endl;
  Person person1;
  person1.display();

  std::cout << "\n2. Creating object with parameterized constructor:"
            << std::endl;
  Person person2("John Doe", 25);
  person2.display();

  std::cout << "\n3. Creating object with copy constructor:" << std::endl;
  Person person3 = person2; // This triggers the copy constructor
  person3.display();

  std::cout << "\n4. Number of Person objects created: "
            << Person::getObjectCount() << std::endl;

  std::cout << "\n5. Creating a local object that will be destroyed:"
            << std::endl;
  {
    Person localPerson("Local", 30);
    localPerson.display();
    // localPerson will be destroyed when this scope ends
  }
  std::cout << "Local object has been destroyed" << std::endl;

  std::cout << "\n6. Final number of Person objects: "
            << Person::getObjectCount() << std::endl;

  return 0;
}
