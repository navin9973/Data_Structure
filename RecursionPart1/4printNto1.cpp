// #include<iostream>
// using namespace std;
// void print(int n){
//   if(n==0) return;
//   cout<<n<<endl;
//   print(n-1);
// }
// int main(){
//   int n;
//   cout<<"enter a number";
//   cin>>n;
//   print(n);
// }

// //1 to n
// #include<iostream>
// using namespace std;
// void print(int x,int n){
//   if(x>n) return;
//   cout<<x<<endl;
//   print(x+1,n);
// }
// int main(){
//   int n;
//   cout<<"enter a number";
//   cin>>n;
//   print( 1,n);
// }

// without extra parameter
#include <iostream>
using namespace std;
void print(int n)
{
  if (n == 0)
    return;
 
print(n-1);
  cout << n << endl;
  
  
}
int main()
{
  int n;
  cout << "enter a number";
  cin >> n;
  print(n);
}