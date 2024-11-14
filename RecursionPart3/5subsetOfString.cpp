// #include<iostream>
// #include<string>
// using namespace std;
// void subset(string ans,string orignal){
//   if(orignal==""){
//     cout<<ans<<endl;
//     return;
//   }
//   char ch=orignal[0];
//   subset(ans+ch,orignal.substr(1));
//   subset(ans,orignal.substr(1));

// }
// int main(){
//   string str="abc";
//   subset("",str);
// }


#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subset(string ans,string orignal,vector<string>&v){
  if(orignal==""){
    v.push_back(ans);
    return;
  }
  char ch=orignal[0];
  subset(ans+ch,orignal.substr(1),v);
  subset(ans,orignal.substr(1),v);

}
int main(){
  string str="abc";
  vector<string>v;
  subset("",str,v);
  for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;
  }