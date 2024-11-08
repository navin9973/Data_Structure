// #include<iostream>
// #include<string>
// using namespace std;
// int maze(int sr,int sc,int er ,int ec){
//    if(sr>er||sc>ec) return 0;
//    if(sr==er&&sc==ec) return 1;
//    int rightway=maze(sr,sc+1,er,ec);
//    int downway=maze(sr+1,sc,er,ec);
//    return rightway+downway;
// }
// void printway(int sr,int sc,int er ,int ec,string s){
//  if(sr>er||sc>ec) return;
//    if(sr==er&&sc==ec){
//     cout<<s<<endl;
//     return;
//    }
//    printway(sr,sc+1,er,ec,s+"R");
//    printway(sr+1,sc,er,ec,s+"D");
//    return ;
// }

// int main(){
//   cout<<maze(1,1,4,4)<<endl;
//   printway(1,1,3,3,"");
// }

//by two parameter only
#include<iostream>
#include<string>
using namespace std;
int maze(int r,int c){
   if(r<1||c<1) return 0;
   if(r==1&&c==1) return 1;
   int rightway=maze(r,c-1);
   int downway=maze(r-1,c);
   return rightway+downway;
}
void printway(int r ,int c,string s){
 if(r<1||c<1) return;
   if(r==1&&c==1){
    cout<<s<<endl;
    return;
   }
   printway(r,c-1,s+"R");
   printway(r-1,c,s+"D");
   return ;
}

int main(){
  cout<<maze(3,3)<<endl;
  printway(3,3,"");
}