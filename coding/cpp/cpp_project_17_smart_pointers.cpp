#include <iostream>
#include <memory>
#include <ostream>
#include <string>

class Resource {
private:
  std::string name;

public:
  // Question: why initialize variable like : name(n) not inside function
  Resource(std::string n) : name(n) {
    std::cout << "Resource created: " << name << std::endl;
  }

  ~Resource() { std::cout << "Resource destroyed: " << name << std::endl; }

  void use() { std::cout << "Using resourse: " << name << std::endl; }

  // Question: Why const?
  std::string getName() const { return name; }
};

void demonstrateUniquePtr();
void demonstrateSharedPtr();
void demonstrateWeakPtr();

int main() {
  std::cout << "=== Smart Pointer in C++ ===" << std::endl;
  std::cout << std::endl;

  demonstrateUniquePtr();

  demonstrateSharedPtr();

  demonstrateWeakPtr();

  return 0;
}

void demonstrateUniquePtr() {
  std::cout << "\n=== Demonstrating unique_ptr ===" << std::endl;

  // Creating unique_ptr to manage Resource object
  // whats unique about it? i think we will understand as we go.
  std::unique_ptr<Resource> res1(new Resource("Unique Resource 1"));
  res1->use();

  // unique_ptr can be moved but not copied
  std::cout << "Moving unique_ptr to another variable:" << std::endl;
  std::unique_ptr<Resource> res2 = std::move(res1); // res1 is now null
  res2->use();

  // create another unique_ptr
  std::unique_ptr<Resource> res3(new Resource("Unique Resource 2"));
  res3->use();

  // unique_ptr automatically deletes the object when it goes out of scope
  std::cout << "unique_ptr will automatically delete the resourse when it goes "
               "out of scope."
            << std::endl;
}

void demonstrateSharedPtr() {

  std::cout << "=== Demonstrating shared_ptr ===" << std::endl;

  // Creating shared_ptr to manage Resource object
  std::shared_ptr<Resource> res1(new Resource("Shared Resource 1"));
  res1->use();

  // Creating another shared_ptr pointing to same object
  std::shared_ptr<Resource> res2 = res1; // Both share owenership
  res2->use();

  // Check reference count
  std::cout << "Number of shared_ptr objects pointing to the same resource: "
            << res1.use_count() << std::endl;

  // Create another shared_ptr
  std::shared_ptr<Resource> res3(new Resource("Shared Resource 2"));
  res3->use();

  // When res1 and res2 go out of scope, the resource will be deleted
  // because they were the only ones sharing ownership
  std::cout << "When shared_ptrs go out of scope, the resource is "
               "automatically deleted if no other shared_ptrs point to it."
            << std::endl;
}

void demonstrateWeakPtr() {
  std::cout << "=== Demonstrating weak_ptr ===" << std::endl;

  // Creating shared_ptr
  std::shared_ptr<Resource> sharedRes(new Resource("Weak Resource"));
  sharedRes->use();

  // Creating s weak_ptr that observes the shared_ptr
  std::weak_ptr<Resource> weakRes = sharedRes;
  // Use weak_ptr to check if resourse is still avilable
  if (auto lockedRes = weakRes.lock()) {
    std::cout << "Resource is still avilable: " << lockedRes->getName()
              << std::endl;
    lockedRes->use();
  } else {
    std::cout << "Resource has been deleted." << std::endl;
  }

  // Check reference count
  std::cout << "Shared pointer reference count: " << sharedRes.use_count()
            << std::endl;

  // Reset the shared_ptr (this will delet the resourse)
  std::cout << "Resetting the shared_ptr (deleting resourses)..." << std::endl;
  sharedRes.reset();

  // Check if weak_ptr still works
  if (auto lockedRes =
          weakRes.lock()) { // Question: what is the expression inside the if()
    std::cout << "Resource is still avilable: " << lockedRes->getName()
              << std::endl;
  } else {
    std::cout << "Resource has beed deleted (as expected with weak_ptr)."
              << std::endl;
  }
}
