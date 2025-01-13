// Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
#include <iostream>

class BankAccount
{
private:
  int acc_no;
  int balance;

public:
  BankAccount(int _a, int _b)
  {
    acc_no = _a;
    balance = _b;
  }

  void deposit(int _dA)
  {
    balance += _dA;
    std::cout << "Deposited " << _dA << " and the new balance is " << balance << "\n";
  }

  void withdraw(int _wA)
  {
    balance -= _wA;
    std::cout << "Withdrew " << _wA << " and the new balance is " << balance << "\n";
  }
};

int main()
{
  BankAccount bankaccount(20023, 1000);
  bankaccount.deposit(1000); 
  bankaccount.withdraw(500);
  return 0;
}