// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {

//     vector<int> vec(5); // jb size diya hua rhta h tb
//     for (int i = 0; i <= 5; i++)
//     {
//         cin >> vec[i];
//     }

//     for (int i = 0; i <= 5; i++)
//     {
//         
//         cout << vec[i];
//     }
// }

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    int n;
    cout << "enter a num :";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
        // cin>>vec[x];
    }
    for (int i = 0; i <= n; i++)
    {
    
        cout << vec[i];
    }
}
