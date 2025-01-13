// Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables.
#include <iostream>

class Car
{
private:
  std::string company;
  std::string model;
  int year;

public:
  Car(std::string _c, std::string _m, int _y)
  {
    company = _c;
    model = _m;
    year = _y;
  }

  void displayDetais()
  {
    std::cout << "Company: " << company << "\n";
    std::cout << "Model: " << model << "\n";
    std::cout << "Year: " << year << "\n";
  }
};

int main()
{
  Car c("Honda", "Civic", 2020);
  c.displayDetais();

  return 0;
}