#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
    }
    ~Node()
    {
        int val = data;
        if (next != NULL)
        {
            delete next;
            this->next = NULL;
       }
        if (prev != NULL)
        {
            delete prev;
            this->prev = NULL;
        }
        cout << endl
             << " Memory At variable : - " << val << " is free now " << endl;
    }
};

void insertAtHead(Node *&head, int val)
{
    Node *newn = new Node(val);
    newn->next = head;
    head->prev = newn;
    head = newn;
}
void insertAtTail(Node *&tail, int val)
{
    Node *newn = new Node(val);
    tail->next = newn;
    newn->prev = tail;
    newn->next = NULL;
    tail = tail->next; // * simple approach 
    tail = newn;// ? easy to understand approach 
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{

    Node *node1 = new Node(12);
    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 13);
    print(head);
    insertAtTail(head, 89);
    print(head);
    insertAtHead(head, 823);
    print(head);
    insertAtTail(head, 346);
    print(head);
    insertAtTail(head, 787);
    print(head);
    cout << " head : - " << head->data;
    cout << endl;
    cout << " tail : - " << tail->data;
    cout << endl;
    return 0;
}
