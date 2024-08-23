#include<iostream>
using namespace std;
void display(int *a,int size){  //here a[] is a pointer which store the address of an array we acn also write *a instead of a[]
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
    void change(int b[],int size){
        b[0]=18;
    }

int main(){
    int arr[]={2,4,7,4,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    display(arr,size);  //in array we pass the adress of the first element to the function
    change(arr,size);
    display(arr,size);
}