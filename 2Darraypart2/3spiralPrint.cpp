
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
    int maxr = m - 1;
    int minr = 0;
    int maxc = n - 1;
    int minc = 0;
    while (minr <= maxr && minc <= maxc)
    {

        for (int j = minc; j <= maxc; j++)
        {
            cout << arr[minr][j] << " ";
        }
        minr++;
        if (minr > maxr || minc > maxc)
            break;
        for (int i = minr; i <= maxr; i++)
        {
            cout << arr[i][maxc] << " ";
        }
        maxc--;
        if (minr > maxr || minc > maxc)
            break;
        for (int j = maxc; j >= minc; j--)
        {
            cout << arr[maxr][j] << " ";
        }
        maxr--;
        if (minr > maxr || minc > maxc)
            break;
        for (int i = maxr; i >= minr; i--)
        {
            cout << arr[i][minc] << " ";
        }
        minc++;
    }
}