#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    int m=n-1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++)
        if(i==j)
        cout<<"*";
        else
        cout<<" ";
        for (int k=1;k<=m;k++)
          if((i+k)==m+1)
        cout<<"*";
        else
        cout<<" ";
 cout<<endl;
}
    }
   

