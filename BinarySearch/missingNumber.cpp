// #include <iostream>
// using namespace std;
// int main()
// {
//   int arr[] = {0, 1, 2, 4, 5, 6, 7};
//   int n = 8;
//   int nums = 0;
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] != nums)
//     {
//       cout << nums;
//       break;
//     }
//     else
//       nums++;
//   }
// }

// another way

#include <iostream>
using namespace std;
int main()
{
  int arr[] = { 0,1};
  int n = 2;
  int ans = -1;
  int low=0;
  int high=n-1;
  while(low<=high)
  {
    int mid=low+(high-low)/2;
    if (arr[mid] == mid) low=mid+1;
  
    else
      ans=mid;
      high=mid-1;

  }

  cout<<ans;
}

