#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int nsp=1;
    for(int a =1;a<=n;a++)cout<<a;
     for(int c=n-1;c>=1;c--)       
    cout<<c;
    cout<<endl;

       for (int i=1;i<=n-1;i++){
        int b=1;
    
       for(int j=1;j<=n-i;j++){
        cout<<b;
        b++;
       }
       
       for(int k=1;k<=nsp;k++){
       cout<<" ";
       
       }nsp+=2;

       for(int l=1;l<=n-i;l++){
        b--;
       cout<<b;
       ;
       }
       
       cout<<endl;
    }

}
