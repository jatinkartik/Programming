

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
int getLofLL(Node * head){
    int len = 0;
    while (head!=NULL) {
        head = head->next;
        len++;
    }
    return len;
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
Node * getMidElement(Node * &head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node * fast = head;
    Node * slow = head;
    while (fast!=NULL) {
        if(fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        else {
            fast = fast->next;
            return slow;
        }
    }
    return slow;
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
    insertInLL(head, 19);
    print(head);
    cout<<endl;
    cout<<getLofLL(head);
    cout<<endl;
    cout<<getMidElement(head)->data;
}




