#include <IOSTREAM>
using namespace std;
int odd(int a,int b)
{
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
            cout << i<<endl;
        else
            continue;
    }
}
int main()
{
    int a, b;
    cout << "enter a number";
    cin >> a >> b;
    odd(a, b);
}