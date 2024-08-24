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
    v.push_back(2);
    v.push_back(7);
    int evenSum=0;
    int oddSum=0;
 for(int i=0;i<v.size();i++){
    if(i%2==0){
        evenSum+=v[i];
    }
    else{
        oddSum+=v[i];
    }
 }
       cout<<evenSum-oddSum<<endl;
       
   
}