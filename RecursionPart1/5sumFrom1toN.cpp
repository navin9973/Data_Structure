#include <iostream>
using namespace std;
int add(int sum, int x)
{

  if (x == 0)
    return sum;

return add(sum + x, x - 1) ;



}

int main()
{
  int n;
  cout << "enter a number";
  cin >> n;
  cout << add(0, n);
}

// // //without extra parameter
// #include <iostream>
// using namespace std;
// int add(int x)
// {

//   if (x == 0)
//     return 0;
//      int sum=x+add(x-1);
//      return sum;

// }

// int main()
// {
//   int n;
//   cout << "enter a number";
//   cin >> n;
//   cout << add(n);
// }


