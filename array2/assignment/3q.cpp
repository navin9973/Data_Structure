#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(8);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    bool flag=false;
   for(int i=0,j=1;i<=v.size()-2,j<=v.size()-1;i++,j++){
    if(v[i]<v[j]){
       flag=true;
      
    }
    else{
        flag=false;
        break;
    }
   }
   if(flag==true){
    cout<<"arry is shorted";
   }
   else{
    cout<<"arry is not shorted";
   }
       
   
}