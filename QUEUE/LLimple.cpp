#include <iostream>
using namespace std;

class Node
{ // user defined data type

public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Queue
{ // user defined data structure
public:
    Node *head;
    Node *tail;
    int size;

    Queue()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void push(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void pop()
    {
        if (size == 0)
            cout << "Queue is Empty" << endl;
        head = head->next;
        size--;
    }

    int back()
    {
        if (size == 0)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return tail->val;
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

    int sizeq(){
        return size;
    }
};

int main()
{
     Queue q;

    q.push(1); // 1
    q.push(2); // 2
    q.push(3); // 3
    q.push(4); // 4
    q.push(5); // 5
    q.push(6); // error

    q.display(); // 1 2 3 4 5

    q.pop(); // 2 3 4 5

    q.display(); // 2 3 4 5 

    //  cout << q.top();



    cout << endl;
    return 0;
}