#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int>v2;
    v2.push_back(4);
    v2.push_back(5);
    
    vector<int>v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);
    vector<vector<int> > v; //{{1,2,3},{4,5},{6,7,8,9,10}}
    
    v.push_back(v1);     //2d vector me hm integer push nhi kr shakte h jise v.push_back(2); nhi higa
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[0][1];  //agar hm kuch alag print krenge tab invalid hoga
}

//agar hm 2d array function me pass karege tb hmko size dena hoga 1d me nhi dene se v ho jata h
