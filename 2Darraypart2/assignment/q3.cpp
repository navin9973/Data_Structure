
// #include <iostream>
// using namespace std;
// int main()
// {

//     int m;
//     int n;
//     cout << "enter row of first matrix";
//     cin >> m;
//     cout << "enter column of first matrix";
//     cin >> n;

//     int arr[m][n];
//     cout << "enter element of first array"<<endl;

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for(int j=0;j<n;j++){
//         if(j%2==0){
//         for(int i=m-1;i>=0;i--){
//             cout<<arr[i][j]<<" ";
//         }}
//         else{
//             for(int i=0;i<m;i++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

#include <iostream>
using namespace std;
int main()
{

    int m;
    int n;
    cout << "enter row of first matrix";
    cin >> m;
    cout << "enter column of first matrix";
    cin >> n;

    int arr[m][n];
    cout << "enter element of first array"<<endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=m-1;i>=0;i--){
        for(int j=0;j<n;j++){
             if(j%2==0){
            cout<<arr[i][j]<<" ";
        }
        else{
           cout<<arr[m-1-i][j]<<" ";
        }
        
    }
    cout<<endl;
}
}