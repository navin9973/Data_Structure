#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
void display(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    display(v);
    //    int i=0;
    //    int j=v.size()-1;
    //    while(i<=j){
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    //    }
    // // by for loop
    // for (int i = 0, j = v.size() - 1; i <= j; i++, j--)
    // {
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    // }

    // upper bala sb solution array ke liye h
    // vector kr liye kuch inbuild function hota h
    reverse(v.begin(), v.end());
    display(v);
}