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
// void reversePart(int i, int j, vector<int> &v)
// {
//     while (i <= j)
//     {
//         int temp = v[i];
//         v[i] = v[j];
//         v[j] = temp;
//         i++;
//         j--;
//     }
//     return;
// }
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int n = v.size();
    int k=2;
    if(k>n) k=k%n;
    // display(v);
    // int k = 27;
    // if(k>n) k=k%n;

    reversePart(0, n - k - 1, v);
    // reversePart(n-k,n-1 , v);
    // reversePart(0, n-1, v);
// rotate(v.begin(),v.begin()+n-k,v.end());
    display(v);
}