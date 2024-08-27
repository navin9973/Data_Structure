// #include<iostream>
// #include<vector>

// using namespace std;
// void sort01(vector<int>&a){
//     vector<int> negative;
//     vector<int> positive;
//     for(int i=0;i<a.size();i++){
//       if(a[i]<0){
//         negative.push_back(a[i]);
//       }
//       else{
//         positive.push_back(a[i]);
//       }
//     }

//     for(int i=0;i<a.size();i++){
//         if(i<negative.size()){
//             a[i]=negative[i];
//         }
//         else{
//             a[i]=positive[i-negative.size()];
//         }
//     }
// }

// int main(){
//       vector<int> v;
//       v.push_back(8);
//       v.push_back(-2);
//       v.push_back(3);
//       v.push_back(-6);
//       v.push_back(1);
//       v.push_back(6);
//       v.push_back(1);
//       v.push_back(-4);

//       for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//       } cout<<endl;
//       sort01(v);

//       for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//       } cout<<endl;
// }

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v;
    v.push_back(8);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-6);
    v.push_back(1);
    v.push_back(6);
    v.push_back(1);
    v.push_back(-4);

    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        if (v[i] <0)
        {
            i++;
        }
        if (v[j] > 0){
            j--; }
        // if (i > j)
        //     break;
       else if (v[i] >0 && v[j] < 0)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
