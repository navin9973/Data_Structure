#include <iostream>
using namespace std;
class Node
{
public:
  int val;
  Node *next;

  Node(int val)
  {
    this->val = val;
    next = NULL;
  }
};

class Linklist
{
public:
  Node *head;
  Node *tail;
  int size;

  Linklist()
  {
    head = NULL;
    tail = NULL;
    size = 0;
  };

  // insert at tail
  void InseartAtEnd(int val)
  {
    Node *temp = new Node(val);
    if (size != 0)
    {
      tail->next = temp;
      tail = temp;
      size++;
    }
    else
    {
      Node *temp = new Node(val);
      tail = head = temp;
      size++;
    }
  }

  // insert at head
  void InsertAtHead(int val)
  {
    Node *temp = new Node(val);
    if (size != 0)
    {
      temp->next = head;
      head = temp;
    }
    else
    {
      head = tail = temp;
    }
    size++;
  }

  // insert at anywhere

  void InseartAtIdx(int idx, int val)
  {
    if (idx < 0 || idx > size)
      cout << "invalid index";

    else if (idx == 0)
      InsertAtHead(val);

    else if (idx == size)
      InseartAtEnd(val);

    else
    {
      Node *temp = new Node(val);
      Node *t = head;
      for (int i = 1; i <= idx - 1; i++)
      {

        t = t->next;
      }
      temp->next = t->next;
      t->next = temp;
      size++;
    }
  }
  // get
  void getAtIdx(int idx)
  {
    if (idx < 0 || idx >= size)
      cout << "invalid index" << " ";

    else if (idx == 0)
      cout << head->val;

    else if (idx == size - 1)
      cout << tail->val;

    else
    {
      Node *t = head;
      for (int i = 1; i <= idx; i++)
      {

        t = t->next;
      }
      cout << t->val;
    }
  }

  // delete at head
  void deleteAtHead()
  {
    if (size == 0)
    {
      cout << "list is empty";
      return;
    }

    head = head->next;
    size--;
  }

  // delete at tail
  void deleteAtTail()
  {
    if (size == 0)
    {
      cout << "list is empty";
      return;
    }
    else if (size==1){
      tail=head=NULL;
      size--;
      return;
    };

    Node *temp = head;
    while (temp->next != tail)
    {
      temp = temp->next;
    }
    temp->next = NULL;
    size--;
    tail = temp;
  }

  // delete  any index
  void deleteAtIdx(int idx)
  {
    if (size == 0)
    {
      cout << "list is empty";
      return;
    }
    else if (idx < 0 || idx >= size)
    {
      cout << "invalid index";
      return;
    }
    else if (idx == 0)
      return deleteAtHead();
    else if (idx == size - 1)
      return deleteAtTail();
    else
    {
      Node *temp = head;
      for (int i = 1; i <= idx - 1; i++)
      {
        temp = temp->next;
      }
      temp->next = temp->next->next;
      size--;
    }
  }

  void display()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->val << " ";
      temp = temp->next;
    }
    cout << endl;
  }
};
int main()
{

  Linklist ll;
  ll.InseartAtEnd(20);
  ll.display();

  ll.InsertAtHead(1);
  ll.InseartAtIdx(2, 6);
  ll.InseartAtIdx(1, 6);
  ll.display();
  ll.getAtIdx(8);
  ll.deleteAtHead();
  ll.deleteAtTail();
  ll.deleteAtIdx(0);
  ll.display();
}