// Write a program to print the sum of all odd numbers from a to b (inclusive) using
// recursion

// #include<iostream>
// using namespace std;
// int   result(int i,int n,int sum){

//  if(i==n){
//   return sum;
//  }
//    if(i%2==0){
//     sum=sum+i;

//   }
//   result(i+1,n,sum);

// }
// int main(){
//   int n;
//   cout<<"enter number:";
//   cin>>n;
//   int i=0;
//   int sum=0;
//  cout<< result(i,n, sum);
// }

#include <iostream>
using namespace std;
int result(int i, int n)
{

  if (i > n)
  {
    return 0;
  }
  else if (i % 2 == 0)
  {
    return result(i + 1, n);
  }
else {
  return i+result(i + 2, n);
}
}
int main()
{
  int n;
  cout << "enter number:";
  cin >> n;
  int i = 1;
  int sum = 0;
  cout << result(i, n);
}