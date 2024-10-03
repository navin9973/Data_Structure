#include <iostream>
using namespace std;
int main()
{
    char str[6] = {'a', 'b', 'c', 'd', 'e', '\0'};
    cout << str << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << str[i] << " ";
    }

    cout << endl;
    // cout << str;

    char str1 [5]= "abcd"; // how?
    cout << str1 << endl;
    for (int i = 0; str[i]!='\0'; i++)
    {
        cout << str1[i] << " ";
    }
    

    cout << endl;

    char str3[] = {'a', 'b', 'c', 'd', 'e', 'f','\0'};
    for (int i = 0; str3[i] != '\0'; i++)
    {
        cout << str3[i] << " ";
    }

    cout << endl;

    cout << str3;
}