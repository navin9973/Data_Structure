// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s="physicswallah";
//     int n=s.size();
//    int maxnumber=0;

//    for(int i=0;i<n;i++){
    
//     int count=1;
//     for(int j=i+1;j<n;j++){
//     if(s[i]==s[j]) count++;
//     }
//     if(maxnumber<count)
//     maxnumber=count;
    
//    }
//    for(int i=0;i<n;i++){
//     char ch=s[i];
//     int count=1;
//     for(int j=i+1;j<n;j++){
//     if(s[i]==s[j]) count++;
//     }
//     if(maxnumber==count)
//    cout<<ch<<" "<<maxnumber<<endl;
//    }
// }

////another way and bet way


#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s="physicswallah";
    vector<int> arr(26,0);
int n =s.length();

   for(int i=0;i<n;i++){
    char ch=s[i];
    int ascii=(int)ch;
    arr[ascii-97]++;
   }
   int max=0;
   for(int i=0;i<26;i++){
    if(arr[i]>max){
        max=arr[i];
    }
   }

   for(int i=0;i<26;i++){
    if(arr[i]==max){
        char ch =(char)i+97;
 cout<<max<<" "<<ch<<endl;
    
    }
   
   }
}




