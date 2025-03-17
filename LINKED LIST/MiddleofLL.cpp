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

void Display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* Middle(Node* head){
    int len = 0;
    Node * temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    int midIdx = len/2;
    Node* mid = head;
    for(int i = 1; i<=midIdx; i++){
        mid = mid->next;
    }
  return mid;
}

Node* DeleteMiddle(Node* head, Node*mid){
    Node* temp = head;
    while(temp->next != mid){
        temp = temp->next;
    }
    temp-> next = mid->next;
    return head;

}

Node* Midde1pass(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main()
{


    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    Node *e = new Node(6);
    Node *f = new Node(7);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    Node* head = a;
    Display(head);

    Node* mid = Middle(head);
    cout << mid->val << endl;
    Display(mid);

    DeleteMiddle(head, mid);
    Display(head);
    

    cout << endl;
    return 0;
}