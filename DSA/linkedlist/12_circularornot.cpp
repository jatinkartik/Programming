
#include <bits/stdc++.h>
#include <cstddef>
using namespace std;


class Node{
  public:
    int data ;
    /* Node * prev; */
    Node * next;
    Node(int val){
      this->data = val;
    }
    ~Node(){
      int val = data;
      if(next!=NULL){
        next = NULL;
        delete next;
      } 
     cout<<"Memory at location : - "<< val << " is free now "<<endl;
    }
};
void insertAtTail(Node * &tail,int val){
  Node * temp = new Node(val);
  temp->next = tail->next;
  tail->next = temp;
  /* temp ->prev = tail; */
  /* tail = temp; */
}

void print (Node *&tail)
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
int circularorNot(Node * &tail){
  Node * temp = tail;
  if(temp==NULL||temp->next==NULL){
    return 1;
  }

  do {
    if(temp->next==NULL){
      return 0;
    }
    temp = temp->next;
  }while (temp!=tail); 
  if(temp==tail){

    return 1; 
  }else{
    return 0;
  }
} 
int main(){

  int val = 44;
  Node * node1 = new Node(val);
  Node * tail = node1;
  tail->next = tail;
  cout<<"Insert at tail : - "<<endl;
  insertAtTail(tail, 23805);
  insertAtTail(tail, 534);
  insertAtTail(tail, 58);
  insertAtTail(tail, 3345);
  insertAtTail(tail, 2124);
  insertAtTail(tail, 644);
  /* cout<<"Tail : -   "<<tail->data<<endl; */
  /* print(tail); */
  int vail = circularorNot(tail);
  cout<<endl<<"curr linked list is circular : - "<<vail<<"   "<<endl;
  cout<<endl;
  return 0;
}

