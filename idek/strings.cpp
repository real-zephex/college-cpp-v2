// String

#include <iostream>
#include <string>
#include <algorithm>

int main()
{
  std::string name = "Sumit";
  // String concatenation
  name += " Kumar";

  std::cout << name << "\n";

  // Indexing a string
  std::cout << name[2] << "\n";

  // Modifying a string
  name[2] = 'M';
  std::cout << name << "\n";

  // Length of the string
  std::cout << name.length() << "\n";

  // Converting an integer to a string
  int num = 10;
  std::string string_num = std::to_string(num);
  std::cout << string_num << "\n";

  // Substring
  std::string substring = name.substr(2, 10);
  std::cout << "Substring: " << substring << "\n";

  // Replacing a substring with another string
  name.replace(0, 11, "sUmIt kUmAr");
  std::cout << name << "\n";

  // Finding a character or a substring
  size_t pos = name.find("sUmIt");
  if (pos != std::string::npos)
  {
    std::cout << "Substring found at position: " << pos << std::endl;
  }
  else
  {
    std::cout << "Substring not found in the string";
  }

  return 0;
}