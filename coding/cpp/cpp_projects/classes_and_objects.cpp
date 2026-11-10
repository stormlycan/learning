#include <iostream>
#include <string>

// This program demonstrates creating and using classes and objects in C++

// Define a simple class called 'Person'
class Person {
private:
    // Member variables (attributes)
    std::string name;
    int age;
    
public:
    // Constructor - special function that initializes objects
    Person(std::string personName, int personAge) {
        name = personName;
        age = personAge;
    }
    
    // Member functions (methods)
    void introduce() {
        std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
    }
    
    // Getter functions to access private data
    std::string getName() {
        return name;
    }
    
    int getAge() {
        return age;
    }
    
    // Setter functions to modify private data
    void setName(std::string newName) {
        name = newName;
    }
    
    void setAge(int newAge) {
        age = newAge;
    }
};

int main() {
    // Create objects of the Person class
    Person person1("Alice", 25);
    Person person2("Bob", 30);
    
    // Use the objects
    std::cout << "\n--- Creating Person objects ---" << std::endl;
    person1.introduce();
    person2.introduce();
    
    // Access and modify object properties using getter and setter functions
    std::cout << "\n--- Accessing and modifying object properties ---" << std::endl;
    std::cout << person1.getName() << " is " << person1.getAge() << " years old." << std::endl;
    
    person1.setAge(26);
    std::cout << person1.getName() << " is now " << person1.getAge() << " years old." << std::endl;
    
    return 0;
}