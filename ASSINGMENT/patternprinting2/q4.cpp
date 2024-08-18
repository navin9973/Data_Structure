#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int nsp=1;
    for(int a =1;a<=2*n-1;a++){
        cout<<(char)(a+64);
    }cout<<endl;

       for (int i=1;i<=n-1;i++){
        int b=1;
    
       for(int j=1;j<=n-i;j++){
        cout<<(char)(b+64);
        b++;
       }
       
       for(int k=1;k<=nsp;k++){
       cout<<" ";
       
       b++;}nsp+=2;

       for(int l=1;l<=n-i;l++){
       cout<<(char)(b+64);
       b++;
       }
       
       cout<<endl;
    }

}
