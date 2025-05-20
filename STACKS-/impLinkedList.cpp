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

class Stack
{
public:
    Node *head;
    int size;

    Stack()
    {
        head = NULL;
        size = 0;
    }

    void push(int val)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop()
    {
        if (size == 0)
        {
            cout << "Stack is Empty";
            return;
        }
        head = head->next;
        size--;
    }

    void top()
    {
        if (head == NULL)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        cout << head->val;
    }

    void print(Node *temp)
    {
        if(temp == NULL) return;
        print(temp->next);
        cout << temp->val << " ";
    }

    void display()
    {
        Node *temp = head;
        // while(temp!= NULL){
        //     cout << temp->val << " ";
        //     temp = temp->next;
        // }
        // cout << endl;
        print(temp);
        cout << endl;
    }
};

int main()
{

    Stack st;
    st.top();
    cout << endl;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    cout << st.size << endl;
    st.top();
    cout << endl;
    st.display();
    cout << endl;

    cout << endl;
    return 0;
}
