// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={3,6,4,8,1};
//     int *ptr=arr;  //we can also write &arr[0]
//     cout<<ptr;     //we can`t write &arr or arr[0]
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={3,6,4,8,1};
//     int *ptr=arr;  
//     cout<<ptr<<endl;
//     ptr[0]=1;  //array me bina star ke v value change kr shakte h but integer me *ptr likhna hota h vale change krne ke liye
//     for(int i=0;i<=4;i++){
//         cout<<ptr[i]<<' ';  //we can access the array element through pointer
//     }
// }


//another way for print an array without use of i 
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,6,4,8,1};
    int *ptr=arr;  
    cout<<ptr<<endl;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    ptr=arr;

    *ptr=8; //we can also write ptr[0]=8 same h
    ptr++; //pointing in second value
    *ptr=9;
    ptr--;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    
}

