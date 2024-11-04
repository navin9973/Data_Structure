// Given a positive integer, return true if it is a power of 2 using recursion

#include <iostream>
using namespace std;
bool result(int n)
{

  if (n == 1)
  {

    return true;
  }
   if (n % 2 != 0)
    return false;

  return result(n / 2);
}

int main()
{
  int n;
  cout << "enter number:";
  cin >> n;
  int i = 1;
  int sum = 0;
  cout << result(n);
}