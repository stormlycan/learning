#include <iostream>
#include <string>

class Student {
private:
  std::string name;
  int age;
  double gpa;
  static int noOfStudents;

public:
  // Default constructor
  Student() {
    name = "Unknown";
    age = 0;
    gpa = 0.0;
    noOfStudents++;
    std::cout << "Student object created (default constructor)" << std::endl;
  }

  // Parameterized constructor
  Student(std::string studentName, int studentAge, double studentGpa) {
    name = studentName;
    age = studentAge;
    gpa = studentGpa;
    noOfStudents++;
    std::cout << "Student object created (parameterized constructor)"
              << std::endl;
  }

  // Copy constructor
  Student(const Student &other) {
    name = other.name;
    age = other.age;
    gpa = other.gpa;
    noOfStudents++;
    std::cout << "Student object created (copy constructor)" << std::endl;
  }
  Student(Student &&other) noexcept {
    name = std::move(other.name);
    age = other.age;
    gpa = other.gpa;
    noOfStudents++;
    other.age = 0;
    other.gpa = 0.0;
  }
  // Destructor
  ~Student() {
    noOfStudents--;
    std::cout << "Student object destroyed: " << name << std::endl;
  }

  // Member functions
  void displayInfo() {
    std::cout << "Name: " << name << ", Age: " << age << ", GPA: " << gpa
              << std::endl;
  }

  // Setter functions
  void setName(std::string studentName) { name = studentName; }

  void setAge(int studentAge) { age = studentAge; }

  void setGpa(double studentGpa) { gpa = studentGpa; }

  // Getter functions
  std::string getName() { return name; }

  int getAge() { return age; }

  double getGpa() { return gpa; }

  static int getNumberOfStudents() { return noOfStudents; }
};

int Student::noOfStudents = 0;

int main() {
  std::cout << "=== Constructor and Destructor Review ===" << std::endl;
  std::cout << std::endl;

  std::cout << "Initial number of students: " << Student::getNumberOfStudents()
            << std::endl;
  std::cout << std::endl;

  // Create objects using different constructors
  std::cout << "1. Creating object with default constructor:" << std::endl;
  Student student1;
  student1.displayInfo();
  std::cout << "Current number of students: " << Student::getNumberOfStudents()
            << std::endl;
  std::cout << std::endl;

  std::cout << "2. Creating object with parameterized constructor:"
            << std::endl;
  Student student2("Alice Johnson", 20, 3.8);
  student2.displayInfo();
  std::cout << "Current number of students: " << Student::getNumberOfStudents()
            << std::endl;
  std::cout << std::endl;

  std::cout << "3. Creating object with copy constructor:" << std::endl;
  Student student3 = student2; // Copy constructor called
  student3.displayInfo();
  std::cout << "Current number of students: " << Student::getNumberOfStudents()
            << std::endl;
  std::cout << std::endl;

  std::cout << "4. Creating object dynamically (will need explicit deletion):"
            << std::endl;
  Student *student4 = new Student("Bob Smith", 22, 3.5);
  student4->displayInfo();
  std::cout << "Current number of students: " << Student::getNumberOfStudents()
            << std::endl;
  std::cout << std::endl;

  // Clean up dynamically allocated memory
  delete student4;
  std::cout << "After deleting student4, number of students: "
            << Student::getNumberOfStudents() << std::endl;
  std::cout << std::endl;

  std::cout << "5. Creating objects in different scopes to demonstrate "
               "destructor timing:"
            << std::endl;
  {
    Student student5("Charlie Brown", 19, 3.2);
    student5.displayInfo();
    std::cout << "Current number of students: "
              << Student::getNumberOfStudents() << std::endl;
    std::cout << "student5 is still in scope" << std::endl;
  } // student5 destructor called here as it goes out of scope

  std::cout << "After student5 goes out of scope, number of students: "
            << Student::getNumberOfStudents() << std::endl;
  std::cout << std::endl;

  std::cout << "6. Testing move constructor:" << std::endl;
  Student student6("David Wilson", 21, 3.9);
  Student student7 = std::move(student6); // Move constructor called
  student7.displayInfo();
  std::cout << "Current number of students: " << Student::getNumberOfStudents()
            << std::endl;

  std::cout << std::endl;
  std::cout << "All objects created in main function scope will be destroyed "
               "when main ends."
            << std::endl;
  std::cout << "Final number of students: " << Student::getNumberOfStudents()
            << std::endl;

  return 0;
}
