

#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>&a1,vector<int>&a2){
    int m=a1.size();
    int n=a2.size();
    vector<int> res(m+n);
    int i=0;
    int j=0;
    int k=0;
while(i<=n-1&&j<=m-1){
    if(a1[i]<a2[j]){
        res[k]=a1[i];
        i++;
        
    }
    else{
        res[k]=a2[j];
        j++;
    }
    k++;
}
if(i==m){
    while(j<n){
    res[k]=a2[j];
    j++;
    k++;
    }

}
if(j==n){
    while(i<m){
        res[k]=a1[i];
        i++;
        k++;
    }
}
return res;
}
int main(){
    vector<int>a1;
    a1.push_back(1);
    a1.push_back(2);
    a1.push_back(3);
    a1.push_back(4);
       vector<int> a2;
     a2.push_back(5);
     a2.push_back(6);
     a2.push_back(7);
     a2.push_back(8);
     a2.push_back(9);
     a2.push_back(10);
      
    // merge(a1,a2);   ////we can also print fun like this without storing in any variable
    // for(int i=0;i<merge(a1,a2).size();i++){
    //     cout<<merge(a1,a2)[i]<<" ";
    // }
    vector<int> v=merge(a1,a2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
     
}

