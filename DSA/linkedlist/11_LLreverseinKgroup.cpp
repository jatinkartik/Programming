#include <bits/stdc++.h>
#include <cstddef>
#include <math.h>
#include <ratio>
#include <utility>
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
/* Node * reveserseLl(Node * &head,Node * &curr,Node * &forward,Node * prev,int k){ */

/*     while (k!=0) { */
/*         forward = curr->next; */
/*         curr->next = prev; */
/*         prev  = curr; */
/*         curr = forward; */
/*         k--; */
/*     } */
/*     return  forward; */
/*     } */
Node * reversekgroup(Node * &head,int k ){
    if(head==NULL){
        return NULL;
}    

Node * prev = NULL;
Node * curr = head;
Node * aglaele = NULL;

int count = 0; 

while (curr!=NULL&&count<k) {
    aglaele = curr->next;
   curr->next = prev;
   prev = curr;

   curr = aglaele;
   count++;
}
if (curr!=NULL) {
head->next = reversekgroup(aglaele,k);
}
return prev;

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
    /* insertInLL(head, 888); */
    /* insertInLL(head, 756); */
    print(head);
    head = reversekgroup(head,3);
    print(head);
}
    



