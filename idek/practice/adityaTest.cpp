#include <iostream>
using namespace std;
int main()
{
  int a[3][3] = {{1, 4, 3}, {2, 5, 6}, {8, 4, 5}}, b[3][3], d[3][3];
  cout << "enter 2nd matrix elements:" << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> b[i][j];
    }
  };

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      d[i][j] = a[i][j] + b[i][j];
    }
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << d[i][j] << " ";
    }
    cout << endl;
  }
}