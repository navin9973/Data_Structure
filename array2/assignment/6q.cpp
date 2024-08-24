#include <iostream>
using namespace std;
int main() {
int arr[5]={2,2,6,6,20};
for(int i=0;i<5;i++){
int count=0;
for(int j=0;j<5;j++){
    if(i==j) continue;
if(arr[i]==arr[j]){ 
    count++;
    break;
    
}
}
if(count==0){
cout<<arr[i];
return 0;
}
}
cout<<"No unique value.";

}