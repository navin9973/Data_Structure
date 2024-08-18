#include<IOSTREAM>
using namespace std;
float area(int rad){
    float area =2*3.14*rad;
    return area;

}
int main(){
    int r;
    cout<<"enter a number";
    cin>>r;
     cout <<area(r);
}