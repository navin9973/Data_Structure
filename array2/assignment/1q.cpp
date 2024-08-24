#include<iostream>
#include<vector>
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
    int x=3;
    int count=0;
    for(int i=0;i<=v.size()-1;i++){
        if(v[i]>x){
            count=count+1;
        }
    }
    cout<<count<<"number is greater";

}