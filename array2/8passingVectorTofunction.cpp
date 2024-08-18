// #include<iostream>
// #include<vector>
// using namespace std;
// void change(vector<int> a){
//     a[0]=100;                        //when we pass vector in function then vector are pass by value
//     for(int i=0;i<a.size();i++){     //ek naya vector banta h jiska adress different h
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;

// }
// int  main (){
//     vector<int> v;
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
     
//      change(v);
//       for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }

//pass by reference

#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &a){
    a[0]=100;                      

}
int  main (){
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
     
     change(v);
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

   

    
   

    


   

    
   

    
