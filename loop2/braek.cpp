// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number ";
//     cin>>n;
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             cout<<"composite number ";
//         }
//     } 
// }


#include <iostream >
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    bool f= true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            f=false;
        }
    }
    if(f==1) cout<<n<<"is nither prime and nor compsite";
        else if(f==true) cout<<n<<"prime number";
        else  cout<<n<<"composite number";
    



}