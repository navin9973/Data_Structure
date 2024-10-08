#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string s;
  cin>>s;
  string y=s;

  reverse(y.begin(),y.end());
  cout<<s+y;

   
}

