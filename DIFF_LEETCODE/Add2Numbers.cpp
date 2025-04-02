// LEetcode - 2  - LL

// adding 2 numbers

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

class LinkedList
{
public:
    Node *head;
    int size;

    LinkedList()
    {
        head = NULL;
        size = 0;
    }
    void Insert(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = temp;
        }
        else
        {
            Node *t = head;
            while (t->next != NULL)
            {
                t = t->next;
            }
            t->next = temp;
        }
        size++;
    }
    void Display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

void Display(Node *a)
{
    Node *temp = a;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* addTwoNumbers(Node* l1, Node* l2) {
    Node* templ1 = l1;
    Node* templ2 = l2;
    Node* ans = new Node(-1);
    Node* tempans = ans;
    int carry = 0;

    while (templ1 != NULL && templ2 != NULL) {
        int ans1 = templ1->val + templ2->val + carry;
        templ1 = templ1->next;
        templ2 = templ2->next;
        carry = ans1 / 10;
        ans1 = ans1 % 10;
        Node* farzi = new Node(ans1);
        tempans->next = farzi;
        tempans = tempans->next;
    }
    while(templ1 != NULL){
        int ans1 = templ1->val + carry;
        templ1 = templ1->next;
        carry = ans1 / 10;
        ans1 = ans1 % 10;
        Node* farzi = new Node(ans1);
        tempans->next = farzi;
        tempans = tempans->next;

    }
    while(templ2 != NULL){
        int ans1 = templ2->val + carry;
        templ2 = templ2->next;
        carry = ans1 / 10;
        ans1 = ans1 % 10;
        Node* farzi = new Node(ans1);
        tempans->next = farzi;
        tempans = tempans->next;

    }
    if(carry != 0){
        Node* farzi = new Node(carry);
        tempans->next = farzi;
        tempans = tempans->next;

    }
    return ans->next;
}

int main()
{

    // LinkedList ll;
    // ll.Insert(2);
    // ll.Insert(4);
    // ll.Insert(3);

    // LinkedList ll2;
    // ll2.Insert(5);
    // ll2.Insert(6);
    // ll2.Insert(4);

    // ll.Display();
    // ll2.Display();

    Node *a = new Node(2);
    Node *b = new Node(4);
    Node *c = new Node(3);

    Node *d = new Node(5);
    Node *e = new Node(6);
    Node *f = new Node(4);

    a->next = b;
    b->next = c;
    
    d->next = e;
    e->next = f;

    Display(a);
    Display(d);

    cout << "ADDING" << endl;

    Node* ans =  Add(a, d);
    Display(ans);

    cout << endl;
    return 0;
}