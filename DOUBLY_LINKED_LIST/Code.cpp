#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void display(Node* temp){
    while(temp){
        cout << temp->val << ' ';
        temp = temp->next;

    }
}

int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    Node *f = new Node(60);
    a -> next = b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;

    f->prev=e;
    e->prev=d;
    d->prev=c;
    c->prev=b;
    b->prev=a;

    display(a);
    display(f);

    cout << endl;
    return 0;
}