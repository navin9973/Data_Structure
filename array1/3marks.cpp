#include<iostream>
using namespace std;
int main(){
    int marks[5];
    for(int i=0;i<=4;i++){
        cin>>marks[i];
    }

    for(int i=0;i<=4;i++){
        if(marks[i]<35){
            cout<<i<<endl;;
    
        }
    }
}

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no. of student";
//     cin>>n;
//     int marks[n];
//     cout<<"enter marks of student";
//     for(int i=0;i<=n-1;i++){
//         cin>>marks[i];
//     }

//     for(int i=0;i<=n-1;i++){
//         if(marks[i]<35){
//             cout<<i<<endl;;
    
//         }
//     }
// }