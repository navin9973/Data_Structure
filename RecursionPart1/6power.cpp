#include<iostream>
using namespace std ;
int power(int a,int b){
  if(b==0){
    return 1;
  }
  return a*power(a,b-1);
}
int main(){
  int a=3,b=4;
 cout<< power(3,4);
}