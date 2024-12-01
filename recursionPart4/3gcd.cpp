// #include<iostream>
// // #include<climits>
// using namespace std;
// int hcf(int a,int b){
//   for(int i=min(a,b);i>=2;i--){
//     if(a%i==0&&b%i==0) return i;
//   }
//   return 1;
// }
// int main(){
//   int a=20;
//   int b=44;
//   cout<<hcf(a,b);
// }

//by recursoin
#include<iostream>
using namespace std;
int hcf(int a,int b){
 if(b%a==0) return a;
// if(a==0) return b;
 return hcf(b%a,a);

}
int main(){
  int a=1000;
  int b=10001;
  cout<<hcf(a,b);
}