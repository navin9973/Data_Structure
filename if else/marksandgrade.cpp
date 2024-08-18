// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cin>>marks;
//     if(marks>91){
//         cout<<"excellent";
//     }
//     else if(marks>81){
//         cout<<"very good";
//     } 
//     else if (marks >71){
//         cout<<"good";
//     }
//     else if(marks>61){
//         cout<<"avarage";
//     }
//     else{
//         cout <<"fail";
    
    
// }


// by swicth
#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter problem";
    cin>>a>>op>>b;
    switch(op){
        case '+':
        cout<<a+b;
        break;
         case '-':
        cout<<a-b;
        break;
         case '*':
        cout<<a*b;
        break;
         case '/':
        cout<<a/b;
        break;
    }
}