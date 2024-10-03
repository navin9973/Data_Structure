
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
    for(int j=n-1;j>=0;j--){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}