#include<iostream>
using namespace std;
class Node{
  public:
  int val;
  Node* next;

  Node(int val){
    this->val=val;
    // this->next=NULL;   //to avoid garbga evalue assign
  }
};
int main(){
  // Node a;    
  // a.val=10;
  // Node b;
  // b.val=9;
  // Node c;
  // c.val=18;

//another to assign  value by constructor
Node a(19);
Node b(8);
Node c(9);

a.next=&b;
b.next=&c;
c.next=NULL;

// cout<<(*(a.next)).val;     //isko aise v likh shate h a.next->val
// cout<<a.next->val;     //isko aise v likh shate h a.next->val
cout<<a.next->next->val<<" ";

// another way

// Node temp=a;
// while (temp.next!=NULL){    //last ka number print nhi ho rha h
//   cout<<temp.val<<" ";
//   temp=*(temp.next);
// }
// cout<<temp.val<<" ";

// Node temp=a;
// while (1){    //condition me 1 likhne swe infinite loop chalta h
//   cout<<temp.val<<" ";
//   if(temp.next==NULL) break;
//   temp=*(temp.next);
// }


}