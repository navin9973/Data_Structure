// #include<iostream>
// using namespace std;
// int power(int x,int n){
//   if(n==0)
//     return 1;
  
//   return x*power(x,n-1);
// }
// int main(){

//   cout<<power(3,2);
// }

// another way

#include<iostream>
using namespace std;
int power(int x,int n){
  if(n==0)
    return 1;
    if(n==1) return x;
    if(n%2==0){
      int ans = power(x,n/2);
      return ans*ans;
    }
    if(n%2!=0){
      int ans =power(x,n/2)*x;
      return ans *ans;
    }
  
 
}
int main(){

  cout<<power(3,6);
}