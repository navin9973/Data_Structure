#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int res=INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(res<arr[i][j]){
                res=arr[i][j];
            }
        }
    }
    cout<<res;
    
    }
    
