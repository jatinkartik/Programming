#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int arm)
    {
        this->data = arm;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int num)
{

    Node *temp = new Node(num);
    temp->next = head;
    head = temp;
}
void print(Node *&kuch)
{
    Node *temp = kuch;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtTail(Node *&tail, int dataval)
{
    Node *temp = new Node(dataval);
    tail->next = temp;
    // tail = temp;
    tail = tail->next; // second approachc
}
void insertAtMiddle(Node *&head, Node *&tail, int val, int pos)
{
    Node *temp = head;
    if (pos == 1)
    {
        insertAtHead(head, val);
        return;
    }
    int v = 1;
    while (v < pos - 1)
    {
        temp = temp->next;
        v++;
    }
    if (temp->next == NULL)
    {
        // TODO: YEH KARNA BAAKI HAI ABHI
        insertAtTail(tail, val); // ! yaha gadbad hai bro ek baar dekh lena
        return;                  // // yeh jarruri hai vena aage bhi run hoga code
        // * abb kyu karna isse
        // ? yeh wala bhi dekh lena ek baar
    }
    Node *neww = new Node(val);
    neww->next = temp->next;
    temp->next = neww;
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
    insertAtMiddle(head, tail, 33, 6);
    print(head);
    cout << " Head : - > " << head->data;
    cout << " Tail : - > " << tail->data;
    cout << endl;
    return 0;
}
