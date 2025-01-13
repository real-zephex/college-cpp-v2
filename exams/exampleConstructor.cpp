#include <iostream>

class Car
{
public:
  std::string _brand;
  int _year;

  Car(std::string brand, int year)
  {
    _brand = brand;
    _year = year;
  }

  Car(const Car &obj)
  {
    _brand = obj._brand;
    _year = obj._year;
  }

  void display()
  {
    std::cout << "Car brand: " << _brand << " Year: " << _year << std::endl;
  }
};

int main()
{
  Car car1("Honda", 2021);
  Car car2 = car1;
  car2.display();
  return 0;
}