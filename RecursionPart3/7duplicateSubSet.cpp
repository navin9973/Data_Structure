
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// void subset(string ans,string orignal,vector<string>&v,bool flag){
//   if(orignal==""){
//     v.push_back(ans);
//     return;
//   }
//   char ch=orignal[0];
//   if(orignal.length()==1){
//   subset(ans+ch,orignal.substr(1),v,true);
//   subset(ans,orignal.substr(1),v,true);
//   return;
//   }
//   char dh=orignal[1];
//   if(ch==dh){
//    if(flag==true)subset(ans+ch,orignal.substr(1),v,true);
//   subset(ans,orignal.substr(1),v,false);
//   }
//   else{
//     if(flag==true) subset(ans+ch,orignal.substr(1),v,true);
//   subset(ans,orignal.substr(1),v,true);
//   }

// }
// int main(){
//   string str="aab";
//   vector<string>v;
//   subset("",str,v,true);
//   for(int i=0;i<v.size();i++)
//     cout<<v[i]<<endl;
//   }
//antoher way
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subset(string ans,string orignal,vector<string>&v,bool flag){
  if(orignal==""){
    v.push_back(ans);
    return;
  }
  char ch=orignal[0];
  if(orignal.length()==1){
  subset(ans+ch,orignal.substr(1),v,true);
  subset(ans,orignal.substr(1),v,true);

  }
  else{
  char dh=orignal[1];
  if(ch==dh){
   subset(ans+ch,orignal.substr(1),v,true);
  subset(ans,orignal.substr(1),v,false);
  }
  else{
    if(flag==true) subset(ans+ch,orignal.substr(1),v,true);
  subset(ans,orignal.substr(1),v,true);
  }
  }

}
int main(){
  string str="aab";
  vector<string>v;
  subset("",str,v,true);
  for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;
  }