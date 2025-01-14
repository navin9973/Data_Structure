#include<iostream>
using namespace std;
class Node{
  public:
  int val;
  Node* next;

  Node(int val){
    this->val=val;
    next=NULL;
  }
};

class Linklist{
  public:
  Node* head;
  Node* tail;
  int size;

  Linklist(){
    head=NULL;
    tail=NULL;
    size=0;
  };

  void InseartAtEnd(int val){
   Node* temp=new Node(val);
   if(size!=0){
   tail->next=temp;
   tail=temp;
   size++;
   }
   else{
    Node* temp=new Node(val);
    tail=head=temp;
    size++;
   }
  }

void display(){
  Node* temp =head;
  while(temp!=NULL){
    cout<<temp->val;
    temp=temp->next;
  }
  cout<<endl;

}

};
int main(){

  Linklist ll;
  ll.InseartAtEnd(20);
  ll.display();

}