#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Using Recursion

void displayrec(Node *head)
{
    if (head == NULL)
        return;
    displayrec(head->next);
    cout << head->val << " ";
}

int size(Node *head)
{
    int n = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        n++;
        temp = temp->next;
    }
    return n;
}

void insertAtEnd(Node *head, int val)
{
    Node *t = new Node(val);
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = t;
    cout << endl;
}

void insertAtHead(Node *head, int val)
{

    Node *t = new Node(val);
    t->next = head;
    head = t;
}

int main()
{

    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    a->next = b; // a ke next me b ka address dal do
    b->next = c; // b ke me c ka dal do
    c->next = d;
    d->next = e;
    display(a);
    cout << endl;

    insertAtEnd(a, 90);
    display(a);

    insertAtHead(a, 110);
    display(a);

    // Direct Print ->
    // cout << a->next->next->next->val; // 40

    // Printing Linked List
    // Node *temp = a;
    // while (temp != NULL)
    // {
    //     cout << temp->val << ' ';
    //     temp = temp->next;
    // }
    // display(a);
    cout << endl;
    cout << "Size of LL - " << size(a);

    cout << endl;
    return 0;
}