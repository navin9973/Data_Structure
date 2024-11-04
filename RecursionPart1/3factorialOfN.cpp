#include <iostream>
using namespace std;
int fun(int x)
{

  
  if (x==1||x == 0)
    return 1;

    
   return x*fun(x-1);
    
    
 
}

int main()
{
  int n;
  cout << "enter a number";
  cin >> n;
  cout << fun(n);
}