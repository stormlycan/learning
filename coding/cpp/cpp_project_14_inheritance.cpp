#include <iostream>
#include <string>

class Person {
private:
  std::string name;
  int age;

public:
  Person(std::string n, int a) : name(n), age(a) {
    std::cout << "Person Constructor called for: " << name << std::endl;
  }

  std::string getName() const { return name; }

  void setName(std::string n) { name = n; }

  int getAge() const { return age; }

  void setAge(int a) { age = a; }

  virtual void display() const {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
  }

  virtual ~Person() {
    std::cout << "person destructor called for: " << name << std::endl;
  }
};

// Derived callss
class Employee : public Person {
private:
  std::string employeeId;
  double salary;

public:
  Employee(std::string n, int a, std::string id, double s)
      : Person(n, a), employeeId(id), salary(s) {
    // Note: Initilised just after the constructor is created not inside any
    // special meaning
    std::cout << "Employee constructor called for: " << getName() << std::endl;
  }

  std::string getEmployeeId() { return employeeId; }

  void setEmployeeId(std::string id) { employeeId = id; }

  double getSalary() { return salary; }

  void setSalary(double s) { salary = s; }

  virtual void display() const {
    std::cout << "Employee Info:" << std::endl;
    std::cout << "Name: " << getName() << ", Age: " << getAge() << std::endl;
    std::cout << "Employee ID: " << employeeId << ", Salary: " << salary
              << std::endl;
  }

  ~Employee() {
    std::cout << "Employee destructor called for: " << getName() << std::endl;
  }
};

// Another derived class - Student
class Student : public Person {
private:
  std::string studentId;
  std::string major;

public:
  // Constructor
  Student(std::string n, int a, std::string id, std::string m)
      : Person(n, a), studentId(id), major(m) {
    std::cout << "Student constructor called for: " << getName() << std::endl;
  }

  // Getter for studentId
  std::string getStudentId() { return studentId; }

  // Setter for studentId
  void setStudentId(std::string id) { studentId = id; }

  // Getter for major
  std::string getMajor() { return major; }

  // Setter for major
  void setMajor(std::string m) { major = m; }

  // Override display function
  virtual void display() const {
    std::cout << "Student Info:" << std::endl;
    std::cout << "Name: " << getName() << ", Age: " << getAge() << std::endl;
    std::cout << "Student ID: " << studentId << ", Major: " << major
              << std::endl;
  }

  // Destructor
  ~Student() {
    std::cout << "Student destructor called for: " << getName() << std::endl;
  }
};

int main() {

  using namespace std;
  cout << "=== Demonstrating Inheritance ===" << endl;

  // Create a objects of derived class
  cout << "\n1. Creating an Employee object:" << endl;
  Employee emp1("Software", 5, "S0012", 50000.0);
  emp1.display();

  std::cout << "\n2. Creating a Student object:" << std::endl;
  Student stud1("Jane Doe", 20, "S001", "Computer Science");
  stud1.display();

  std::cout << "\n3. Accessing inherited members:" << std::endl;
  emp1.setName("John Brown");
  emp1.setAge(31);
  std::cout << "Updated Employee name: " << emp1.getName() << std::endl;
  std::cout << "Updated Employee age: " << emp1.getAge() << std::endl;

  std::cout << "\n4. Demonstrating polymorphism with pointers:" << std::endl;
  Person *personPtr;

  // Point to Employee object
  personPtr = &emp1;
  std::cout << "Person pointer pointing to Employee:" << std::endl;
  personPtr->display(); // This calls Person::display() (not overridden)

  // Point to Student object
  personPtr = &stud1;
  std::cout << "Person pointer pointing to Student:" << std::endl;
  personPtr->display(); // This calls Person::display() (not overridden)

  // Note: To see polymorphism with overridden functions, we'd need to make
  // display() virtual in Person

  return 0;
}
