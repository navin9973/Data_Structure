#include<iostream>
using namespace std;
int main(){
    int x;
    cout <<"enter month number";
    cin>>x;
    switch(x){
        case 1:
        cout<<"january 31 days";
        break;
          case 2:
        cout<<"february 28 days";
        break;
          case 3:
        cout<<"march 31 days";
        break;
          case 4:
        cout<<"april 30 days";
        break;
          case 5:
        cout<<"may 31 days";
        break;
          case 6:
        cout<<"june 30 days";
        break;
          case 7:
        cout<<"july 31 days";
        break;
          case 8:
        cout<<"august 31 days";
        break;
          case 9:
        cout<<"september 30 days";
        break;
          case 10:
        cout<<"october 31 days";
        break;
          case 11:
        cout<<"november 30 days";
        break;
          case 12:
        cout<<"december 31 days";
        break;
        default:
        cout<<"invalid number";
    }
}