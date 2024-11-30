#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void subset(int arr[], int n, vector<vector<int>> &v, int idx, vector<int> &temp)
{
v.push_back(temp);
  for (int i = idx; i < n; i++)
  {
    if (i != idx && arr[i] == arr[i - 1])
      continue;

    temp.push_back(arr[i]);
    subset(arr, n, v, i + 1, temp);
    temp.pop_back();
  }
}
int main()
{
  int arr[] = {1, 2, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  vector<vector<int>> v;
  int idx = 0;
  vector<int> temp;
  subset(arr, n, v, idx, temp);
  for (int i = 0; i < v.size(); i++)
  {
    for(int j=0;j<v[i].size();j++){
    cout<<v[i][j];
  }
  cout<<endl;
  
}
}