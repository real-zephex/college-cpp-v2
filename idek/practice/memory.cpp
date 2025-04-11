#include <cstdlib>
#include <iostream>

int memoryAllocation()
{
  std::cout << "Executing dynamic memory allocation..." << "\n";
  int *arr = new int[10];

  for (int i = 0; i < 10; i++)
  {
    arr[i] = i * i;
  }

  for (int i = 0; i < 10; i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";

  delete arr;
  return 0;
};

int call()
{
  std::cout << "Executing calloc...";

  int *ptr = (int *)calloc(5, sizeof(int));
  std::cout << ptr << "\n";
  // calloc()
  /*
    returns a pointer to the first byte of the allocated memory block

    parameters:
      size: int
      size: size_t
  */

  for (int i = 0; i < 5; i++)
  {
    ptr[i] = i * i;
  }

  for (int i = 0; i < 5; i++)
  {
    std::cout << ptr[i] << " ";
  }
  std::cout << '\n';
  free(ptr);

  return 0;
}

int main()
{
  std::cout << "Executing malloc...";

  int *ptr = (int *)malloc(sizeof(int));
  // malloc()
  /*
    allocates a block of uninitialized memory to a pointer
    params:
      size: size_t
  */
  *ptr = 5;
  std::cout << ptr << "\n";
  std::cout << *ptr << "\n";

  free(ptr);

  call();
  memoryAllocation();
  return 0;
}