

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node (int val) { this->data = val; }
  ~Node ()
  {
    int val = data;
    if (next != NULL)
      {
        delete next;
        next = NULL;
      }
    cout << " Memory location at " << val << " is free now " << endl;
  }
};
void
insertAtTail (Node *&tail, int value, int val)
{
  if (tail == NULL)
    {
      Node *nn = new Node (val);
      nn->next = nn;
      tail = nn;
      cout << endl << tail->data << " test data " << endl;
    }
  else
    {
      Node *temp = new Node (val);
      Node *curr = tail;
      while (curr->data != value)
        {
          curr = curr->next;
        }
      temp->next = curr->next;
      curr->next = temp;
      cout << endl << tail->data << " test data " << endl;
    }
}
void
deletionInArray (Node *&tail, int val)
{
  if (tail == NULL)
    {
      cout << "Nothing to delete List is empty : " << endl;
      return;
    }

  else
    {
      Node *prev = tail;
      Node *temp = tail->next;
      if(temp==prev){
        tail=NULL;
        return; 
      }
      while (temp->data != val)
        {
          prev = temp;
          temp = temp->next;
        }
      if(tail==temp){
        tail = prev;
      }
      prev->next = temp->next;
      temp->next = NULL;
      delete temp;
    }
}
void
print (Node *&tail)
{
  if (tail == NULL)
    {
      cout << endl << "list is empty nothing to print" << endl;
      return;
    }
  Node *temp = tail;
  do
    {
      cout << tail->data << "  ";
      tail = tail->next;
    }
  while (tail != temp);
  cout << endl;
}
int
main ()
{
  Node *tail = NULL;
  //   print (tail);
  insertAtTail (tail, 1, 3);
  print (tail);
  insertAtTail (tail, 3, 5);
  print (tail);
  insertAtTail (tail, 3, 9);
  print (tail);
  deletionInArray (tail, 3);
  print (tail);
  deletionInArray (tail, 9);
  print (tail);
  deletionInArray (tail, 5);
  print (tail);
  return 0;
}
