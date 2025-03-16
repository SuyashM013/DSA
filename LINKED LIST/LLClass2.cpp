#include <iostream>
using namespace std;

// WITHOUT TAIL POINTER

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

    void InsertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = temp;
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

    void InsertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void InsertAtIdx(int idx, int val)
    {

        if (idx < 0 || idx > size)
            cout << "Invalid Index" << endl;
        else if (idx == 0)
            InsertAtHead(val);

        else if (idx == size - 1)
            InsertAtEnd(val);

        else
        {
            Node *temp = head;
            Node *t = new Node(val);
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
        }
        size++;
    }

    void GetElemAtIdx(int idx)
    {

        if (idx < 0 || idx > size)
            cout << "Invalid Index" << endl;
        else if (idx == 0)
            cout << head->val << endl;
        else
        {
            Node *temp = head;
            for (int i = 0; i < idx; i++)
            {
                temp = temp->next;
            }
            cout << temp->val << endl;
        }
    }

    void DeleteAtHead()
    {
        if (size == 0)
            cout << "List is Empty" << endl;
        head = head->next;
        size--;
    }

    void DeleteAtTail()
    {
        if (size == 0)
            cout << "List is Empty" << endl;
        Node *temp = head;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        size--;
    }

    void DeleteAtIdx(int idx)
    {
        if (idx > size || idx < 0)
            cout << "Invalid Index" << endl;
        else if (idx == 0)
            DeleteAtHead();
        else if (idx == size - 1)
            DeleteAtTail();
        else
        {
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
};

int main()
{
    LinkedList ll;
    ll.InsertAtEnd(1); // 1 -> NULL
    ll.Display();
    ll.InsertAtEnd(2); // 1 -> 2 -> NULL
    ll.Display();
    ll.InsertAtEnd(3); // 1 -> 2 -> 3 -> NULL
    ll.Display();
    ll.InsertAtEnd(4); // 1 -> 2 -> 3 -> 4 -> NULL
    ll.Display();

    ll.InsertAtHead(10); // 10 -> 1 -> 2 -> 3 -> 4 -> NULL
    ll.Display();
    ll.InsertAtHead(20); // 20 -> 10 -> 1 -> 2 -> 3 -> 4 -> NULL
    ll.Display();

    ll.InsertAtIdx(2, 40); // 20 -> 10 -> 40 -> 1 -> 2 -> 3 -> 4 -> NULL
    ll.Display();

    ll.GetElemAtIdx(2); // 40

    ll.DeleteAtHead(); // 10 -> 40 -> 1 -> 2 -> 3 -> 4 -> NULL
    ll.Display();
    ll.DeleteAtTail(); // 10 -> 40 -> 1 -> 2 -> 3 -> NULL
    ll.Display();
    ll.DeleteAtTail(); // 10 -> 40 -> 1 -> 2 -> NULL
    ll.Display();

    ll.DeleteAtIdx(2); // 10 -> 40 -> 2 -> NULL
    ll.Display();
    ll.DeleteAtIdx(2); // 10 -> 40 -> 2 -> NULL
    ll.Display();

    cout << ll.size << endl;

    cout << endl;
    return 0;
}