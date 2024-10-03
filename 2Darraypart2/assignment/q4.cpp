
#include <iostream>
using namespace std;
int main()
{

    
    int n;
    cout << "enter row of first matrix";
    cin >> n;

    int arr[n][n];
      int m=1;

int minr=0;
int maxr=n-1;
int maxc=n-1;
int minc=0;

while(minr<=maxr&&minc<=maxc){
for(int j=minc;j<=maxc;j++){
    arr[minr][j]=m;
    m++;
}
minr++;
if(minr>maxr||minc>maxc) break;
for(int i=minr;i<=maxr;i++){
    arr[i][maxc]=m;
    m++;
}
maxc--;
if(minr>maxr||minc>maxc) break;
for(int j=maxc;j>=minc;j--){
    arr[maxr][j]=m;
    m++;
}
maxr--;
if(minr>maxr||minc>maxc) break;
for(int i=maxr;i>=minr;i--){
    arr[i][minc]=m;
    m++;
}
minc++;
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}