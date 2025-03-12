#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }

};

int main()
{


    Node* a = new Node(10);  
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;  // a ke next me b ka address dal do
    b->next = c;  // b ke me c ka dal do
    c->next = d;



// Printing Linked List
    Node* temp = a;
    while(temp!=NULL){
        cout << temp->val << ' ';
        temp = temp->next;
    }


    cout << endl;
    return 0;
}