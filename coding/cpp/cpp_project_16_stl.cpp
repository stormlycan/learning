#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <set>
#include <string>
#include <vector>

int square(int x) { return x * x; }

void print_element(int x) { std::cout << x << " "; }

int main(int argc, char *argv[]) {
  using namespace std;

  // Section 1: Vectors - Dynamic arrays
  cout << "\n1. Vectors - Dynamic arrays:" << endl;
  vector<int> vec = {4, 2, 6, 1};
  cout << "Original vector: ";
  for (int val : vec) {
    cout << val << " ";
  }
  cout << endl;

  // Find an element
  auto it = find(vec.begin(), vec.end(), 6);
  if (it != vec.end()) {
    cout << "Found 6 at position: " << distance(vec.begin(), it) << endl;
  }

  // Section 2: Lists (Linked lists)
  cout << "\n2. Lists - Linked lists:" << endl;
  list<string> names = {"Alice", "Bob", "Charlie", "Diana"};
  cout << "Original list: ";
  for (const string &name : names) {
    cout << name << " ";
  }
  cout << endl;

  // Add an element
  names.push_back("Eve");
  cout << "After adding 'Eve': ";
  for (const string &name : names) {
    cout << name << " ";
  }
  cout << endl;

  // Section 3. Maps (key- value pair)
  cout << "\n3. Maps - Key-value pairs:" << endl;
  map<string, int> scores = {{"Alice", 89}, {"Bob", 52}, {"Nicole", 97}};
  cout << "Original map:" << endl;
  for (const auto &pair : scores) {
    cout << pair.first << ": " << pair.second << endl;
  }
  cout << endl;

  // Section 4. Sets (Unique elements)
  cout << "\n4. Sets - Unique elements:" << endl;
  set<int> unique_nums = {1, 3, 5, 2, 4, 3, 1};
  cout << "Original set (duplicates removed)";
  for (int num : unique_nums) {
    cout << num << " ";
  }
  cout << endl;

  // Section 5. algorithms
  cout << "\n5. STL Algorithms:" << endl;

  // Transform - apply function to each element
  vector<int> numbers = {1, 2, 3, 4, 5};
  vector<int> squares(numbers.size());
  transform(numbers.begin(), numbers.end(), squares.begin(), square);
  cout << "Original numbers: ";
  for (int num : numbers) {
    cout << num << " ";
  }
  cout << "\nSquared numbers: ";
  for (int num : squares) {
    cout << num << " ";
  }
  cout << endl;

  // For_each - apply function to each element
  cout << "Printing elements: ";
  for_each(numbers.begin(), numbers.end(), print_element);
  cout << endl;

  // Section 6: iterator
  cout << "\n6. Iterators - Transversing containers:" << endl;
  cout << "Vector elements using iterators: ";
  for (auto iter = vec.begin(); iter != vec.end(); ++iter) {
    cout << *iter << " ";
  }
  cout << endl;

  cout << "\n=== C++ STL Demonstration Completed ===" << endl;

  return 0;
}
