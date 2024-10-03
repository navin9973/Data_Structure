#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
  string str="raghav is a best teacher";
  stringstream ss(str);   //stringstream is used to divide the string in parts
  string temp;
  while(ss>>temp){   //iska matlab h ki ss variable me se parts ko temp me stor kr do
    cout<<temp<<endl;
  }
}