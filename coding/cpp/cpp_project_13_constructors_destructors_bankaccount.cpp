#include <iostream>
#include <ostream>
#include <string>

class BankAccount {
private:
  int accountId;
  std::string name;
  double balance;
  static int accountIdCounter;

public:
  BankAccount() {
    accountId = accountIdCounter;
    name = "Unknown";
    balance = 0.0;
    accountIdCounter++;
    std::cout << "Account Initialized with no details" << std::endl;
  }

  BankAccount(std::string n, double b = 0) {
    accountId = accountIdCounter;
    name = n;
    balance = b;
    accountIdCounter++;
    std::cout << "Account Initialized" << std::endl;
  }

  BankAccount(const BankAccount &old) {
    accountId = accountIdCounter;
    name = old.name;
    balance = old.balance;
    accountIdCounter++;
    std::cout << "Account Initialized with old account details" << std::endl;
  }

  ~BankAccount() { std::cout << "Account Deleted" << std::endl; }

  void setName(std::string n) { name = n; }

  std::string getName() { return name; }

  void setBalance(double b) { balance = b; }

  double getBalance() { return balance; }

  void displayInfo() {
    std::cout << "Account Id: " << accountId << ", Name: " << name
              << ", balance: " << balance << std::endl;
  }
};

int BankAccount::accountIdCounter = 0;

int main() {
  std::cout << "=== Bank Account Constructor and Destructor Demonstration ==="
            << std::endl;
  std::cout << std::endl;

  std::cout << "1. Creating accounts using different constructors:"
            << std::endl;
  std::cout << "-------------------------------------------------" << std::endl;

  // Create an account with default constructor
  std::cout << "Creating account with default constructor:" << std::endl;
  BankAccount account1;
  account1.displayInfo();
  std::cout << std::endl;

  // Create an account with parameterized constructor (name only)
  std::cout << "Creating account with parameterized constructor (name only):"
            << std::endl;
  BankAccount account2("John Smith");
  account2.displayInfo();
  std::cout << std::endl;

  // Create an account with parameterized constructor (name and balance)
  std::cout
      << "Creating account with parameterized constructor (name and balance):"
      << std::endl;
  BankAccount account3("Jane Doe", 1000.50);
  account3.displayInfo();
  std::cout << std::endl;

  // Create an account with copy constructor
  std::cout << "Creating account with copy constructor:" << std::endl;
  BankAccount account4 = account3; // Copy constructor called
  account4.displayInfo();
  std::cout << std::endl;

  std::cout << "2. Modifying account information:" << std::endl;
  std::cout << "-------------------------------------------------" << std::endl;

  // Modify account information
  std::cout << "Modifying account 2 name:" << std::endl;
  account2.setName("John Smith Jr.");
  account2.displayInfo();
  std::cout << std::endl;

  std::cout << "Modifying account 2 balance:" << std::endl;
  account2.setBalance(500.75);
  account2.displayInfo();
  std::cout << std::endl;

  std::cout << "3. Creating accounts in different scopes:" << std::endl;
  std::cout << "-------------------------------------------------" << std::endl;

  // Create accounts in a different scope
  {
    std::cout << "Creating accounts within a block scope:" << std::endl;
    BankAccount account5("Alice Johnson", 2000.00);
    account5.displayInfo();
    std::cout << "account5 is still in scope" << std::endl;

    BankAccount account6("Bob Brown");
    account6.displayInfo();
    std::cout << "account6 is still in scope" << std::endl;

    std::cout << "Exiting block scope..." << std::endl;
  } // account5 and account6 destructors called here

  std::cout << std::endl;
  std::cout << "4. Creating accounts dynamically (heap allocation):"
            << std::endl;
  std::cout << "-------------------------------------------------" << std::endl;

  // Create account dynamically
  std::cout << "Creating account dynamically:" << std::endl;
  BankAccount *account7 = new BankAccount("Charlie Wilson", 3000.00);
  account7->displayInfo();
  std::cout << std::endl;

  // Don't forget to delete dynamically allocated memory
  std::cout << "Deleting dynamically allocated account:" << std::endl;
  delete account7;
  std::cout << std::endl;

  std::cout << "5. Final account information before program ends:" << std::endl;
  std::cout << "-------------------------------------------------" << std::endl;

  // Display remaining accounts
  std::cout << "Account 1 info:" << std::endl;
  account1.displayInfo();
  std::cout << std::endl;

  std::cout << "Account 2 info:" << std::endl;
  account2.displayInfo();
  std::cout << std::endl;

  std::cout << "Account 3 info:" << std::endl;
  account3.displayInfo();
  std::cout << std::endl;

  std::cout << "Account 4 info:" << std::endl;
  account4.displayInfo();
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << "Program ending - all remaining objects will be destroyed "
               "automatically."
            << std::endl;

  return 0;
}
