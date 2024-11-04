#include<iostream>
using namespace std;
void fun(){
  cout<<"hello jee"<<endl;
  return;
}
int addition(int a,int b){
 int  sum=a+b;
 fun();
  return sum;
}
int main(){
  int a=2;
  int b=9;
  cout<<addition(a,b);
}