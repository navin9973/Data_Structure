#include<iostream>
using namespace std;
int main(){
   
    int arr[2][3]; 
cout<<"enter the array element:";
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            cin>>arr[i][j];
        }
    }
    int max=arr[0][0];  //INT_MIN v sue kr shate  h <climits> laga kr
     for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
           if(max<arr[i][j]){
            max=arr[i][j];
           }
        }
        
    }
    cout<<max;
}
