#include <iostream>

class Animals
{
protected:
  int age;
  std::string type;

public:
  // Animals(std::string t, int a) : type(t), age(a) {}
  Animals(std::string _t, int _a)
  {
    type = _t;
    age = _a;
  }

  void displayAge()
  {
    std::cout << "The age of " << type << " is " << age << " years.\n";
  };

  virtual void walking()
  {
    std::cout << "Animal is walking";
  }
};

class Dog : public Animals
{
public:
  Dog(int age) : Animals("Dog", age) {};

  void walking()
  {
    std::cout << "The dog is walking" << "\n";
  }
};

int main()
{
  Dog myDog(2);
  myDog.displayAge();

  myDog.walking();
  return 0;
}