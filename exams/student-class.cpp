// student-class.cpp

#include <iostream>

class Student
{
public:
  void setValues(std::string _n, int _a)
  {
    name = _n;
    age = _a;
  };

  void secretSauceInit()
  {
    secretSauce();
  }

protected:
  std::string name;
  int age;

private:
  void secretSauce()
  {
    std::cout << "ayoo broo, whats up? " << "\n";
    std::cout << "What do I see here, " << name << ". And you are " << age << " years old! Damnnn \n";
  };
};

int main()
{
  Student student;
  student.setValues("Sumit", 18);
  student.secretSauceInit();
  return 0;
}