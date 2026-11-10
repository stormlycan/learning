#include <iostream>
#include <ostream>

int main() {
  // C++ Basics
  // This program will demonstrate the differences between C and C++

  // In C++, we use cout for output instead of printf
  // Type the code to print "Hello, C++!" using cout here
  std::cout << "Hello, C++!" << std::endl;
  // In C++, we use cin for input instead of scanf
  int number;
  std::cout << "Enter a number: ";
  // Type the code to read the number using cin here
  std::cin >> number;
  // Display the number
  std::cout << "You entered: " << number << std::endl;

  // In C++, we can use namespaces to avoid typing std:: every time
  // Type the code to include the using directive for the std namespace here
  using namespace std;
  // Now we can use cout and cin without std:: prefix
  std::cout << "\nUsing namespace std:\n";
  cout << "Enter another number: ";
  // Type the code to read the number using cin here
  cin >> number;
  // Display the number
  cout << "You entered: " << number << endl;

  return 0;
}
