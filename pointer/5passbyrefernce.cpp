#include <iostream>
using namespace std;
int swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
     return 0;

}
int main(){
    int a=5,b=7;
    int *p1=&a;
    int *p2=&b;
    swap(&a,&b);
    cout<<a<<" "<<b;
}