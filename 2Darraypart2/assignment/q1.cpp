
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
    cout << "enter element of first array";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j||(j+i)==(n-1)){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}