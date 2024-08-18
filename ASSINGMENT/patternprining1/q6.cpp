// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter the rows and column";
//     cin>>n>>m;
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++)
//         if(i==1||i==n||j==1||j==m)
//         cout<<"*";
//         else 
//         cout<<" ";
//         cout<<endl;
//     }
// }


#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
// Printing upper triangle
for(int i = 0; i < n; ++i) {
for(int j = 0; j <= i; ++j) {
cout << "* ";
}
cout << endl;
}
// Printing lower triangle
for(int i = 0; i < n-1; ++i) {
for(int j = 0; j < n - i - 1; ++j) {
cout << "* ";
}
cout << endl;
}
}