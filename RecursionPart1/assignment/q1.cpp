// < Print an increasing-decreasing sequence using recursion
// Example:
// If n = 5, the output should be:
// 1 2 3 4 5 4 3 2 1



#include<iostream>
using namespace std;
void result(int i,int n){
  if(n==0){
    return;
  }
    cout<<i;
  result(i+1,n-1);
  if(i!=1)
 cout<<i-1;
 
 
}
int main(){
  int n;
  cout<<"enter number:";
  cin>>n;
  int i=1;
  result(i,n);
}