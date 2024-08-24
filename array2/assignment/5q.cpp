#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(8);
    v.push_back(5);
    v.push_back(2);
    v.push_back(7);
   display(v);
 for(int i=0;i<v.size();i++){
    if(i%2==0){
        v[i]=v[i]+10;
    }
    else{
        v[i]=v[i]*2;
    }
 }
     display(v);
}