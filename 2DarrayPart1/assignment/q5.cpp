#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][3]={1,3,5,7,3,4,7,8,1};
    
    int max=INT_MIN;
    int index=0;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
          sum+=arr[i][j];
        }
        if(max<sum) {max=sum;
        index=i;}
    }
    cout<<max<<" "<<index;
    
   
    
}