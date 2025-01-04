#include<iostream>
using namespace std;
class student{
  public:
  string name;
  int roll;
  float marks;

   student(string s,int r,float m){  // using constructor we assign the value  and this is a parameterize constructor
    name=s;
    roll=r;
    marks=m;
   };
   
};

 void change(student *s){
      s->name="jay";
    };
int main(){
  // student s("navin",12,89.9);
  student* s= new student("navin",28,88.0);  //iska matlab h koi ek naya object bn raha run time pr aur uska adress s pointer me save ho raha h s-> ka matlb h s me jo adress h us pr jao aur uska value lao
  cout<<s->name<<endl;
  change(s);
  cout<<s->name;
  // s.name ="navin";
  // s.roll=19;
  // s.marks=89.2;
  // cout<<s.name<<endl;
  // cout<<s.roll<<endl;
  // cout<<s.marks<<endl;



}