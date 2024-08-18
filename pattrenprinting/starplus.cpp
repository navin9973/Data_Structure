// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//    int mid =(n/2)+1;
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if (mid==i||mid ==j){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (j==i||j+i ==n+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

