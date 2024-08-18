#include<iostream>
#include<vector>
using namespace std;
int main(){ 
    vector<int> v;
    //inserting ke liye ya inputke liye [] ka use na kre
    v.push_back(90);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
     v.push_back(4);
     cout<<v.capacity()<<endl;
     cout<<v.size()<<endl;
      v.push_back(60);
      cout<<v.size()<<endl;
      cout<<v.capacity()<<endl;


    //if you wnat to access or update then we use []  
    v[0]=2;
 cout<<v[0]<<" ";
 cout<<v[1]<<" ";
 cout<<v[2]<<" ";





}