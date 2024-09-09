#include<iostream>

using namespace std;
int main(){
    int arr[5][5]={1,2,3,4,5,3,4,6,7,7,6,5,4,3,8,7,6,5,4,1,2,3,7,8,5};

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==5/2||j==5/2){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    
    }
    
