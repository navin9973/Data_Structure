#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 int main(){
    string str="navin is my name";
    
    str.length();
    str.size();  //both is used for finding the size of string

    str.push_back('b');  //it is ised to push charater in string be can't push string in string by push back
    str.pop_back();//it is used to remove last charater from string
    str+"big bag";  //+ operater is used to add two string in front or back
    reverse(str.begin(), str.end());  //it is used to reverse string  we can aslo rever se part by part of string
 }