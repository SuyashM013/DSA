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
        this->prev = NULL;
        this->next = NULL;
    }
};

class Doubly_LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    Doubly_LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void InsertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val)
    {

        if (idx < 0 || idx > size)
            cout << "Invalid Index" << endl;
        else if (idx == 0)
            insertAtHead(val);

        else if (idx == size)
            InsertAtEnd(val);
        else
        {
            Node *t = new Node(val);
            Node *temp = head;

            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp;
            t->next->prev = t;
            size++;
        }
    }

    void deleteAtHead()
    {
        if (size == 0)
            cout << "List is Empty" << endl;
        head = head->next;
        if (head)
            head->prev = NULL;
        head->prev = NULL;
        if (head == NULL)
            tail = NULL;
        size--;
    }

    void deleteAtTail()
    {
        if (size == 0)
            cout << "List is Empty" << endl;
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIndex(int idx)
    {
        if (idx > size || idx < 0)
            cout << "Invalid Index" << endl;
        else if (idx == 0)
            deleteAtHead();
        else if (idx == size - 1)
            deleteAtTail();
        else
        {
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;
            size--;
        }
    }
};

int main()
{

    Doubly_LinkedList ll;
    ll.InsertAtEnd(10);
    ll.InsertAtEnd(20);
    ll.InsertAtEnd(30);
    ll.InsertAtEnd(40);
    ll.InsertAtEnd(50);
    ll.InsertAtEnd(60);
    ll.display();

    ll.insertAtHead(70);
    ll.display();

    ll.insertAtIdx(3, 90);
    ll.display();

    ll.deleteAtHead();
    ll.display();

    ll.deleteAtIndex(5);
    ll.display();
    cout << endl;
    return 0;
}