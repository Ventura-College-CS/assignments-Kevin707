#include <iostream>
using namespace std;

int main()
{
  const int a = 10;
  double numbers[a] = {0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5, 5.0};
  double *ptr;

  ptr = numbers;

  for(int i=0; i<a; i++)
  {
    cout << *(ptr+i) << endl;
  }
}