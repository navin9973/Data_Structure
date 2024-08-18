#include <iostream>
#include <vector>
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

    cout << "size is " << v.size() << endl;
    cout << "capacity is " << v.capacity()<<endl;

    v.pop_back();
    v.pop_back(); //v.push se end se size kam hota h pr capacity same rhta h 
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout << "size is " << v.size() << endl;
    cout << "capacity is " << v.capacity();
}