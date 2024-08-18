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
     int max=arr[0];
     
     
    for(int i=1;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<max;
}