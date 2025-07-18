#include <iostream>
#include <vector>
using namespace std;

class Queue
{
public:
    int front, back, size;
    vector<int> q;
    int arr[5];

    Queue()
    {
        front = 0;
        back = 0;
        size = 0;
    }

    void push(int val)
    {
        if (back == 5)
            cout << "Queue is Full can not input value  "<<val << endl;
        arr[back] = val;
        back++;
        size++;
    }

    void pop()
    {
        if (size == 0)
        {
            cout << "Underflow, Queue is Empty";
            return ;
        }
        front++;
        size--;
    }

    int top()
    {
        if (size == 0)
        {
            cout << "Underflow, Queue is Empty";
            return 0;
        }
        return arr[front];
    }
    int rear()
    {
        if (size == 0)
        {
            cout << "Underflow, Queue is Empty";
            return 0;
        }
        return arr[back - 1];
    }
    int sizeq()
    {
        return size;
    }

    void display()
    {
        for (int i = front; i < back; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
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

     cout << q.top();

    cout << endl;
    return 0;
}