#include <iostream>
#include <cstdlib>

int useNewDelete()
{
  std::cout << "Executing dynamic memory allocation...\n";
  int *ptr = new int[10]; // Declaring an integer array of size 10

  for (int i = 0; i < 10; i++)
  {
    ptr[i] = i + i;
  }

  for (int i = 0; i < 10; i++)
  {
    std::cout << ptr[i] << " ";
  }
  std::cout << "\n";
  delete[] ptr;
  return 0;
}

int useMalloc()
{
  std::cout << "Executing malloc...\n";
  int *ptr = (int *)malloc(5 * sizeof(int));
  // malloc()
  /*
    alloactes a block of uninitialized memory to a pointer
    params:
      size: size_t
  */
  for (int i = 0; i < 5; i++)
  {
    ptr[i] = i + i;
  }

  for (int i = 0; i < 5; i++)
  {
    std::cout << ptr[i] << " ";
  }
  std::cout << "\n";

  free(ptr);
  return 0;
}

int useCalloc()
{
  std::cout << "Executing calloc...\n";

  int *ptr = (int *)calloc(5, sizeof(int));
  // calloc()
  /*
    returns a pointer to the first byte of the allocated memory block
    params:
      elements: size_t
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
  std::cout << "\n";
  free(ptr);
  return 0;
}

int main()
{
  useNewDelete();
  useMalloc();
  useCalloc();

  return 0;
}