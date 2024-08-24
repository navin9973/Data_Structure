#include <iostream>
using namespace std;
int main() {
int arr[5]={1,2,3,2,1};
int flag=true;
int i=0;
int j=4;
while(i<j){
    if(arr[i]!=arr[j]){
        flag=false;
        break;
    }
    i++;
    j--;
}
if(flag==false) cout<<"array is not paligtrom";
else{
    cout<<"array is plegidrom";
}
}