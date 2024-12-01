// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//   string s="race";
//   int i=0;
//   int j=s.size()-1;
//   bool flag =false;
//   while(i<j){
//     if(s[i]==s[j]){
//       i++;
//       j--;
//       flag =true;
//     }
//     else{
//       cout<<"not pelidrome";
//       break;
//     }
//   }
//   if(flag==true) cout<<"it is pelidrome";
// }

//by recursion

#include<iostream>
#include<string>
using namespace std;
bool pelidrome(string s,int i,int j){
if(i>j){
  return true;
}
if(s[i]==s[j]){
 return pelidrome(s,i+1,j-1);
}
else return false;
}
int main(){
  string s="racecar";
  int i=0;
  int j=s.size()-1;
  cout<<pelidrome(s,i,j);
}