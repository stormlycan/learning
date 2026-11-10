#include <iostream>
#include <ostream>

class Shape {
protected:
  double width;
  double height;

public:
  Shape(double w = 0, double h = 0) : width(w), height(h) {
    std::cout << "Shape constructor called" << std::endl;
  }

  // virtual destructor (good practice for polymorphic classes)
  virtual ~Shape() { std::cout << "Shape destructor called" << std::endl; }

  virtual double area() const {
    std::cout << "Calculating area in Shape class (base class)" << std::endl;
    return 0.0;
  }

  virtual void display() const {
    std::cout << "This is a generic shape" << std::endl;
    std::cout << "Width: " << width << ", Height: " << height << std::endl;
  }
};

class Rectangle : public Shape {
public:
  Rectangle(double w = 0, double h = 0) : Shape(w, h) {
    std::cout << "Rectangle constructor called" << std::endl;
  }

  virtual double area() const override {
    std::cout << "Calculating area in Rectangle class" << std::endl;
    return width * height;
  }

  virtual void display() const override {
    std::cout << "This is a Rectangle" << std::endl;
    std::cout << "Width: " << width << ", Height: " << height << std::endl;
  }

  virtual ~Rectangle() {
    std::cout << "Rectangle destructor called" << std::endl;
  }
};

class Triangle : public Shape {
public:
  Triangle(double w = 0, double h = 0) : Shape(w, h) {
    std::cout << "Triangle constructor called" << std::endl;
  }

  virtual double area() const override {
    std::cout << "Calculating area in Triangle class" << std::endl;
    return 0.5 * width * height;
  }

  virtual void display() const override {
    std::cout << "This is a Triangle" << std::endl;
    std::cout << "Width: " << width << ", Height: " << height << std::endl;
  }

  virtual ~Triangle() {
    std::cout << "Triangle destructor called" << std::endl;
  }
};

int main() {
  using namespace std;
  cout << "=== Demonstrating Polymorphism in C++ ===" << endl;

  // Create objects
  cout << "\n1. Creating Shape objects directly:" << endl;
  Rectangle rect(5, 3);
  Triangle tri(4, 6);

  cout << "\2. Displaying objects directly:" << endl;
  rect.display();
  cout << endl;
  tri.display();

  cout << "\n3. Demonstrating polymorphism with base class pointers:" << endl;
  Shape *shapePtr;

  shapePtr = &rect;
  cout << "Shape pointer pointing to Rectangle:" << endl;
  shapePtr->display();

  cout << "Area through shape pointer: " << shapePtr->area() << endl;

  cout << endl;

  shapePtr = &tri;
  cout << "Shape pointer pointing to Triangle:" << endl;
  shapePtr->display();

  cout << "Area through shape pointer: " << shapePtr->area() << endl;

  cout << "\n4. Demonstrating polymorphism with an array of pointers:" << endl;
  Shape *shapes[3];
  shapes[0] = new Rectangle(32, 4);
  shapes[1] = new Triangle(8, 12);
  shapes[2] = new Rectangle(16, 10);

  // Process all shapes using same interface
  for (int i = 0; i < 3; i++) {
    cout << "\nShape: " << i + 1 << ":" << endl;
    shapes[i]->display();
  }

  // Clean up memory
  cout << "\n5. Cleaning up memory (destructor calls):" << endl;
  for (int i = 0; i < 3; i++) {
    delete shapes[i];
  }

  cout << "\n=== Polymorphism demonstration compleated ===" << endl;

  return 0;
}
