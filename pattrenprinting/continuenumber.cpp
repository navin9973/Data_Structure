// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//    int k=1;
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<k<<" ";
//             k++;
//             }
        
//         cout<<endl;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
   int a=1;
    for (int i=1;i<=n;i++){
        if(i%2!=0)
        a=1;
        else
        a=0;
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            if(a==1)
            a=0;
            else
            a=1;
        }
        cout<<endl;
    }
}


