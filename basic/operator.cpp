#include<iostream>
using namespace std;
int main(){
    int a=6;
    int b=4;
    cout<<(a+b)<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a%b<<endl;
    cout<<a/b<<endl;


    cout<<(a==b)<<endl;//0
    cout<<(a!=b)<<endl;//1
    cout<<(a>=b)<<endl;//1
    cout<<(a<=b)<<endl;//0
    cout<<(a<b)<<endl;//0
    cout<<(a>b)<<endl;//1


   bool exp1=true;
   bool exp2=false;
   cout<<(exp1&&exp2)<<endl;//0
   cout<<(exp1||exp2)<<endl;//1
   cout<<(!exp2)<<endl;//1

  a+=3;
  cout<<a<<endl;//9
  a-=2;
  cout<<a<<endl;//7
  a/=2;
  cout<<a<<endl;//3
  a%=2;
  cout<<a<<endl;//1
  a*=2;
  cout<<a<<endl;//2


  b=5;
  cout<<(b<<2)<<endl;//20
  cout<<(b>>2)<<endl;//1
  cout<<(b&2)<<endl;//0
  cout<<(b|2)<<endl;//7


  cout<<sizeof(char)<<endl;
  bool flag;
  a==2?flag=true:flag=false;
  cout<<flag<<endl;
  cout<<&a<<endl;


  cout<<-a<<endl;
  cout<<++a<<endl;
  cout<<--a<<endl;
   return 0;
}