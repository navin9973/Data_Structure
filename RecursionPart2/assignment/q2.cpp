#include<iostream>
using namespace std;
int sum(int n){
   if(n==0) return 0;
    
   cout<<n%10;
   sum(n/10);
   return 1;
}
int main(){
  int n;
  cin>>n;
  sum(n);
  

}