#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;  //arrange the element in accending order is called sort
int main(){
  vector<int>v(5);
   for(int i=0;i<5;i++){
    cin>>v[i];
   }
   sort(v.begin(),v.end());
  for(int i=0;i<5;i++){
    cout<<v[i];
  }
}
