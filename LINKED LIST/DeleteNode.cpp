// Leetcode - 237

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

Node* DeleteNode(Node* head, Node* tar){
    
    if(head == tar){
        head = head->next;
        return head;
    }
    Node* temp = head;

    while(temp->next != tar){
        temp = temp->next;
    }
      temp->next = temp->next->next;
      return head;

}

Node* DeleteValue(Node* head, int val){
    if(head->val == val){
        head = head->next;
        return head;
    }
    Node* temp = head;

    while(temp->next->val != val){
        temp = temp->next;
    }
      temp->next = temp->next->next;
      return head;
}

int main()
{

    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    Node *e = new Node(6);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Node* head = a;

    Display(head);

    head = DeleteNode(head, a);
    Display(head);

    head = DeleteValue(head, 5);
    Display(head);


    cout << endl;
    return 0;
}