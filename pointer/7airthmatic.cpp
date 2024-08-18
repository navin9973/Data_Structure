// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int a;
// //     int *ptr=&a;
// //     cout<<ptr<<endl;
// //      ptr=ptr+1;//ptr++ same h increase by 4 due ti int value
// //     cout<<ptr;
    


// // }
// #include<iostream>
// using namespace std;

// int main(){
//     int a =4;
//     int *ptr=&a;
//     cout<<*ptr<<endl;
//     ptr++;
//     cout<<*ptr;
   

// }


 #include<iostream>
using namespace std;

int main(){
    int a =4;
    int *ptr=&a;
    cout<<*ptr<<endl;
    (*ptr)++;
    cout<<*ptr;
}