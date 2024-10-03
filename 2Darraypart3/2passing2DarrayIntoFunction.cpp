#include<iostream>
using namespace std;
void change(int a[]){
    a[0]=4;
}
void change2d(int arr[3][3]){  //in 2d array we must have to pass size also it is a problem so we use 2dvector here
    arr[0][1]=18;
}
int main(){

    //for 1d array
    int a[]={1,2,3};
    cout<<a[0];
    change(a);
    cout<<a[0];

    //for 2d array
    int arr[][3]={{1,2},{3,4},{5,6}};
    cout<<arr[0][1];
    change2d(arr);
    cout<<arr[0][1];
}