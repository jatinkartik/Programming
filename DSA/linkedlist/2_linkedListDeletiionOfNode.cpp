#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
    }
    ~Node()
    {
        int val = data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << endl
             << "Node with value : -- " << val << " is free now" << endl;
    }
};

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
void insertAtTail(Node *&tail, int vall)
{
    Node *temp = new Node(vall);

    tail->next = temp;
    // tail = temp;
    tail = tail->next;
}
void insertAtHead(Node *&head, int value)
{
    Node *node2 = new Node(value);
    node2->next = head;
    head = node2;
}
void insertAtPos(Node *&head, Node *&tail, int pos, int val)
{
    Node *temp = head;
    if (pos == 1)
    {
        insertAtHead(head, val);
        return;
    }
    int i = 1;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, val);
        return;
    }
    Node *addN = new Node(val);
    addN->next = temp->next;
    temp->next = addN;
}

void deletionInLinkedList(Node *&head, Node *&tail, int pos)
{
    if (pos == 1)
    {
        Node *n = head;
        head = head->next;
        n->next = NULL; // ? this is required bcz deleting memory shoudl not point to memory in use
        delete n;
    }
    else
    {
        int vall = 1;
        Node *curr = head;
        Node *prev = NULL;
        while (vall < pos)
        {
            prev = curr;
            curr = curr->next;
            vall++;
        }
        if (curr->next == NULL)
        {
            prev->next = curr->next;
            tail = prev;
            curr->next = NULL;
            delete curr;
        }
        else
        {
            prev->next = curr->next;
            curr->next = NULL; // ? this is required bcz deleting memory shoudl not point to memory in use
             delete curr;
        }
    }
}
int main()
{
    Node *n = new Node(5);
    Node *head = n;
    Node *tail = n;
    print(head);
    insertAtHead(head, 55);
    print(head);
    insertAtHead(head, 88);
    print(head);
    insertAtTail(tail, 3545);
    print(head);
    insertAtTail(tail, 99);
    print(head);
    insertAtPos(head, tail, 6, 333);
    print(head);
    cout << " Head : - > " << head->data;
    cout << " Tail : - > " << tail->data;
    deletionInLinkedList(head, tail, 6); // *  problem solved

    print(head);
    cout << " Head : - > " << head->data;
    cout << " Tail : - > " << tail->data;

    deletionInLinkedList(head, tail, 5); // *  problem solved

    print(head);
    cout << " Head : - > " << head->data;
    cout << " Tail : - > " << tail->data;

    deletionInLinkedList(head, tail, 4); // *  problem solved

    print(head);
    cout << " Head : - > " << head->data;
    cout << " Tail : - > " << tail->data;

    cout << endl;
    return 0;
}