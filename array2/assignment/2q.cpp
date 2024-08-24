#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(2);
    v.push_back(7);
    v.push_back(9);
    v.push_back(1);
    v.push_back(3);
    int highest=INT_MIN;
    int sechight=INT_MIN;
    int third=INT_MIN;

    for(int i=0;i<=v.size()-1;i++){
        if(v[i]>highest){
            third=sechight;
             sechight=highest;
            highest=v[i];
           
        }
       
    }
    cout<<highest<< " number is greater"<<endl;
    cout<<sechight<<" number is greater"<<endl;
    cout<<third<<" number is greater";

}