// #include <iostream>
// using namespace std;
// int main()
// {

//     int arr[5] = {1, 2, 2, 4, 5};
//     bool flag = false;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i + 1; j < 5; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 flag = true;
//                 cout << arr[i];
//                 break;
//             }
//         }
//     }
//     if (flag == false)
//         cout << "No duplicate";
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 1, -4, 5, 2, 9, 6};
    int n = sizeof(arr) / 4;
    bool flag = false;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
            // if(flag==true) break;
        }
        if (flag == true)
            break;
    }
    if (flag == true)
        cout << "there is duplicate in array";
    else
    {
        cout << "no duplicate";
    }
}