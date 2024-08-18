// // #include<iostream>
// // using namespace std;
// // int main() {
// // cout<<"enter 5 elements of the array"<<endl;
// // int a[5];
// // for(int i=0;i<5;i++){
// // cin>>a[i];
// // }
// // int x=0;
// // bool flag=false;
// // for(int i=0;i<4;i++){
// // if(a[i]!= x){
// // cout<<x<<endl;
// // flag=true;
// // break;
// // }
// // else x++;
// // }
// // if(flag==false) cout<<x<<endl;
// // return 0;
// // }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,4,5};
//     int n=sizeof(arr)/4;
//     bool flag=false;
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]!=(i+1)) {
//         flag=true;
//         cout<<i+1;
//         break;}
//     }
//     if(flag==false)cout<<"there is no missing no.";
// }

#include<iostream>
using namespace std;
int main(){
    int arr[]={-3,-1,0,2,4,5};
    int n=sizeof(arr)/4;
    bool flag=false;
    int x=1;
    for(int i=0;i<=n-1;i++){
        if(arr[i]<=0) continue;
        if(arr[i]!=x) {
        flag=true;
        cout<<x;
        break;}
        else{
            x++;
        }
    }
    if(flag==false)cout<<"there is no missing no.";
}