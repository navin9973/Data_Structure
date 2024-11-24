#include <iostream>
#include <climits>
using namespace std;
void largestNum(int arr[], int n)
{
  if (n <= 0)
    return;
  cout << arr[n - 1] << " ";
  largestNum(arr, n - 1);
}
int main()
{
  int arr[] = {1, 2, 3, 4, 7, 5, 8, 90};
  int n = sizeof(arr) / sizeof(arr[0]);

  largestNum(arr, n);
}