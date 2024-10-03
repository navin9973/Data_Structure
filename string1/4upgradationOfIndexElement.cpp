// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
   
//     char s[n];
//     cout<<"enter string element";
//     for(int i=0;i<n;i++){
//         cin>>s[i];
//     }
   
//     // cout<<s;

//     // string s="raghav";
//     for(int i=0;s[i]!='\0';i++){
//         if(i%2==0){
//             s[i]='a';
//         }
//     }
//    cout<<s;
// }

#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"enter size of string";
    cin>>n;
   
    char s[n];
    cout<<"enter string element";
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
     for(int i=0;s[i]!='\0';i++){    //sahi answer ke liye condition n tak loop run kra shate h
        if(i%2==0){                  //but !='\0 krne se shai answer nhi dega kyu ki usko manual likhna hoga 
            s[i]='a';                //uske jagah pr o koi v garbage value leta h
        }
    }
   cout<<s;
}

