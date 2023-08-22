#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

class Node{
    public:
        int data ;
        Node * prev;
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
            if(prev!= NULL){
                prev = NULL;
                delete prev;
            }
            cout<<endl;
            cout<<"Memory at location : - "<< val << " is free now "<<endl;
        }
};
void insertAtTail(Node * &tail,int val){
    Node * temp = new Node(val);
    temp->next = tail->next;
    tail->next = temp;
    temp ->prev = tail;
    tail = temp;
}


int main(){

    int val = 44;
    Node * node1 = new Node(val);
    Node * tail = node1;
    tail->next = tail;
    cout<<"Insert at tail : - "<<endl;
    insertAtTail(tail, 534);
    cout<<"Tail : -   "<<tail->data<<endl;

    cout<<endl;
    return 0;
}
