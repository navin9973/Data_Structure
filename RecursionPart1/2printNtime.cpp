#include<iostream>
using namespace std;
void fun(int x){
  if(x==0) return;
  cout<<"Good Morning"<<endl;
  fun(x-1);
  return ;
}
int main(){
  int n;
  cout<<"enter a number";
  cin>>n;
  fun(n);
  return 0;
}