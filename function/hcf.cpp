#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    int f = 1;
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            f = i;
            break;
        }
    }
    return f;
}
int main()
{
    int a, b;
    cout << "enter a number a and b";
    cin >> a >> b;
   cout<< gcd(a, b);
    
}