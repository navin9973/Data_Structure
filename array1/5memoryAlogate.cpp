#include<iostream>
using namespace std;
int main(){
  int arr[4]{7,3,2,5};
  cout<<&arr[0]<<endl;
  cout<<&arr[2]<<endl;
  cout<<arr<<endl;  //&arr and arr are same they print address of arry

}