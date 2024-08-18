// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"enter size of arry:";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//      int x;
//      cout<<"enter element you want to search:";
//      cin>>x;
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]==x){
//             cout<<"it is present"<<endl;;
    
//         }
//     }
// }

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter size of arry:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
     int x;
     cout<<"enter element you want to search:";
     cin>>x;
     bool flag=false;  //cheak mark
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag=true;
    }
    if(flag==true) cout<<"it is pesent";
    else{
        cout<<"not present";
    }
}