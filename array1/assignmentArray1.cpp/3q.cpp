#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of the array:";
    cin>>n;
    int arr[n];
    cout<<"enter the number:";
    for(int i=0;i<=n-1;i++){
         cin>>arr[i];
    }

    int min=INT_MAX;
    for(int i=0;i<=n-1;i++){
        if(min>arr[i]) min=arr[i];
    }
    cout<<"the mini no:"<<min<<endl;
}
