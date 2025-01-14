#include<iostream>
using namespace std;
class Node{
  public:
  int val;
  Node* next;

  Node(int val){
    this->val=val;
    this->next=NULL;

  }
};

void display(Node* head){
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->val<<" ";
    temp=temp->next;

  }
};

int size(Node* head){   //  isko bina temp ke v kr shakte h kyu ki head ek naya dabba bn rhah h jo address se value ko print kr raha phir dusra ka adress le kr uska  value print kara raha h
  int size=0;
  Node *temp=head;
  while(temp!=NULL){
    size++;
    temp=temp->next;
  }
  cout<<endl;
return size;
};

void displayRec(Node* head){
  if(head==NULL) return;  //base case

  cout<<head->val<<" "; // kaam  agar kaam call ke baad hoga tb linklist reverse order me print hoga
  displayRec(head->next); //call    //isme hm b ka dress pass kr rhe h   
}


int main(){

  Node* a=new Node(10);
  Node* b=new Node(20);
  Node* c=new Node(40);
  Node* d=new Node(60);
  Node *e=new Node(80);
a->next=b;
b->next=c;
c->next=d;
d->next=e;
// Node * temp=a;
// while(temp!=NULL){
//   cout<<temp->val<<" ";
//   temp=temp->next; 
// }

//print value by passing a pointer as parameter to function

display(a);
cout<<"size of linklist is "<<size(a)<<endl;

//print by recursion

displayRec(a);
 

}