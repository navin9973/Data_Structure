#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"enter cost price ";
    cin>>cp;
    cout <<"enter selling price ";
    cin>>sp;
    if(sp<cp){
        cout<<"loss "<<cp-sp;
    }
    if (cp<sp)
{
    cout<<"profit "<<sp-cp;

}
if(sp==cp){
    cout<<"no loss and no profit";
}
}