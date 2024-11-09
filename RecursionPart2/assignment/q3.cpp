// #include<iostream>
// using namespace std;
// int sum(int count ,int n){
//    if(n==0) return count;
//     if(n%2==0){
      
//       sum(count+1,n/2);
//     }
//   else{
    
//     sum(count+1,n-1);
//   }
//   //  return count;
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<sum(0,n);
  

// }

//without extra parameter
#include<iostream>
using namespace std;
int sum(int n){
   if(n==0) return 0;
    if(n%2==0){
      
      return 1+sum(n/2);
    }
  else{
    
    return 1+sum(n-1);
  }

}
int main(){
  int n;
  cin>>n;
  cout<<sum(n);
  

}