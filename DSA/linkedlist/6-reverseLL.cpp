#include <bits/stdc++.h>
#include <cstddef>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(int val){
            this->data = val;
        }
        ~Node(){
            int temp = data;
            next = NULL;
            delete next;
            cout<<endl<<" Memory at location  "<<temp<<" is free now "<<endl;
        }
};
Node * reverseALL(Node * &head){
    if (head==NULL||head->next==NULL) {
        return head; 
    }
    Node * prev =NULL;
    Node * curr =head;
    Node *forward = NULL;
    while (curr!=NULL) {
        forward = curr->next;
        curr->next = prev;
        prev  = curr;
        curr = forward;
    }
    return  prev;
}
void insertInLL(Node * & head,int val){
    Node * temp =  new Node(val);
    temp->next = head->next;
    head->next = temp;
    cout<<endl<<"Node inserted "<<endl;
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
Node * nnn = new Node(22);
Node * head = nnn;
insertInLL(head, 44);
insertInLL(head, 33);
insertInLL(head, 99);
insertInLL(head, 55);
insertInLL(head, 00);
insertInLL(head, 11);
insertInLL(head, 544);
print(head);
head = reverseALL(head);
print(head);




}
