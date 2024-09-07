#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,3,2,4,6,5,1,2};
    int count=0;
    int x=6;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            for(int k=j+1;k<8;k++){
                if(arr[i]+arr[j]+arr[k]==6){
                    count++;
                }
            }
        }
    }
    cout<<count;

}