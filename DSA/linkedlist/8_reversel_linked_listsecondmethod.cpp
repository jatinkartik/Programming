#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

class Node{
    public:
        int data;
        Node * next;
        Node(int val){
            this->data = val;
        }
        ~Node(){
            int val = data;
            next = NULL;
            delete next;

            cout<<" Memory at locatin "<< val<<" is free now "<<endl;

        }
};
Node *  recursiveRll(Node* &head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node * revhead = recursiveRll(head->next);
    head->next->next = head;
    head->next = NULL;
    return revhead;
}
void insertInLL(Node * & head,int val){
    Node * temp =  new Node(val);
    temp->next = head;
    cout<<endl<<"Node inserted "<<endl;
    head = temp;
}
void print(Node * &head){
    Node * temp = head;
    while (temp!=NULL) {
        cout<<" "<<temp->data; 
        temp = temp->next;
    }
    cout<<" "<<endl;
}
int main(){
    Node * nn = new Node(44);
    Node * head = nn;
    insertInLL(head, 23);
    insertInLL(head, 99);
    insertInLL(head, 221);
    insertInLL(head, 88);
    insertInLL(head, 433);
    insertInLL(head, 19);
    print(head);
    head = recursiveRll(head);
    print(head);
}
    



