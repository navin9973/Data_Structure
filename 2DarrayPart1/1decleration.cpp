#include<iostream>
using namespace std;
int main(){
    int arr[3][4]; //decleration kr ke size dena jaruri h nhi to error aayega size nhi dna h to inisealize kr do{2,3,} aise
    int brr[2][3]={{1,2,3},{4,5,6}};
    int crr[2][3]={1,2,3,4,5,6};//same h
    int drr[][3]={1,2,3,4,5,6};//coloum dena jaruri row nhi v de shakta h

    for(int i=0;i<=1;i++){  //i ka matlab row h aur j ka matlab column
        for(int j=0;j<=2;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}
