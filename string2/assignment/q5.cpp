#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
  string str="decode with dsa pw";
  stringstream ss(str);   
  string temp;
  string max="";
  while(ss>>temp){   
    if(max<temp) max=temp;
  }
  cout<<max;
}