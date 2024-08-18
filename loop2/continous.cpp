// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//     if(i%2==0){
//         continue;
//     }
//     cout<<i<<endl;
// }
// }

#include<iostream>
using namespace std;
int main(){
    int n=9876;
    int count=0;
    int a=n;
    while(n>0){
        n/=10;
        count++;
    }   
        cout<<count;
    
}