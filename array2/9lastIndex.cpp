#include<iostream>
#include<vector>
using namespace std;
int  main (){
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2); 
    int x=2; int idx;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x){
    //         idx= i;
    //     }
    // }
    //other way to do by reverse print
    for(int i=(v.size())-1;i>0;i--)
          if(v[i]==x){ 
            cout<<i;
            break;
          }
    
     
}

   

    
   

    
