#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
  vector<int> v;
  v.push_back(90); // 1 1
  v.push_back(9);  // 2 2
  v.push_back(20); // 3 4
  v.push_back(40); // 4 4  jb size aur capacity same hota h tab capacity double ho jata h
  v.push_back(50); // 5 8
  v.push_back(70);
  v.push_back(10);
  v.push_back(30);
  v.push_back(60);
  v.push_back(90);
  v.at(0) = 80; // we can use at() for access and update
  cout << v.at(0) << endl;
  sort(v.begin(), v.end());
  for (int i = 0; i <= v.size(); i++)
  {
    cout << v.at(i) << " ";
  }
}
