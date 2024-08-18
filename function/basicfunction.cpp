#include <iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for (int i = 2; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int main()
{
 
    int final_fact= fact(5);
    cout<<final_fact;
}


   

    
