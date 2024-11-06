// #include<iostream>
// using namespace std;
// int stair(int n ,int count){
//   if(n==0){
//     return count;
//   }
//   if(n==1){
//     count+=1;
//     return count;
//   }
//   if(n==2){
//     count+=1;
//     return stair(n-2,count);
//   }
//   else{
//     count+=1;
//   return stair(n-3 ,count);}
// }
// int main(){
//   int n=5;
//  cout<<stair(n,0);
// }


#include<iostream>
using namespace std;
int stair(int n ){
  if(n==0){
    return 1;
  }
  return stair(n-1)+stair(n-2)+stair(n-3);
}
int main(){
  int n=5;
 cout<<stair(n);
}