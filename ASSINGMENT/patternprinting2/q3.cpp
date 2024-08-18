#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i =1;i<=n;i++){
       for (int j=1;j<=n-i;j++){
        cout<<" ";
       }
    
       for(int k=i;k>=1;k--){
        cout<<k;
       }
       for(int h=2;h<=i;h++)
       cout<<h;
       
       cout<<endl;
    }


}