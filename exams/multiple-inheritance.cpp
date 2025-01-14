// Multiple Inhertiance
#include <iostream>

class Foobar
{
protected:
  std::string property;

public:
  void setProperty(std::string prop)
  {
    property = prop;
  }
};

class Bar
{
protected:
  int glasses;

public:
  void setGlasses(int _g)
  {
    glasses = _g;
  }
};

class Foo : public Foobar, public Bar
{
public:
  void tellThem()
  {
    std::cout << "Foo Class" << "\n";
    std::cout << "Property" << property << "\n"
              << "Glasses: " << glasses << "\n";
  }
};

int main()
{
  Foo f;
  f.setGlasses(12);
  f.setProperty(" glasses");

  f.tellThem();
  return 0;
}