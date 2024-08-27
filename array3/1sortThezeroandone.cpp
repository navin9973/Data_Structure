// #include<iostream>
// #include<vector>

// using namespace std;
// void sort01(vector<int>&a){
//     int zero=0;
//     int one=0;
//     for(int i=0;i<a.size();i++){
//       if(a[i]==0){
//         zero++;
//       }
//       else{
//         one++;
//       }
//     }
//     for(int i=0;i<a.size();i++){
//         if(i<zero){
//             a[i]=0;
//         }
//         else{
//             a[i]=1;
//         }
//     }
// }

// int main(){
//       vector<int> v;
//       v.push_back(0);
//       v.push_back(1);
//       v.push_back(0);
//       v.push_back(0);
//       v.push_back(1);
//       v.push_back(0);
//       v.push_back(1);
//       v.push_back(1);

//       for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//       } cout<<endl;
//       sort01(v);

//       for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//       } cout<<endl;
// }


#include<iostream>
#include<vector>

using namespace std;
int main(){
       vector<int> v;
      v.push_back(1);
      v.push_back(1);
      v.push_back(0);
      v.push_back(1);
      v.push_back(0);
      v.push_back(1);
      v.push_back(1);
      v.push_back(0);
     int i=0;
     int j=v.size()-1;
      while(i<j){
        if(v[i]==0){
          i++;
        } if(v[j]==1)j--;
        // if(i>j) break;
       else if(v[i]==1&&v[j]==0){
          int temp=v[i];
          v[i]=v[j];
          v[j]=temp;
          i++;
          j--;
        }
      }
       for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
      } cout<<endl;
}

