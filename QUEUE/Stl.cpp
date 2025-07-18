#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void display(queue<int> &q)
{

    int n = q.size();

    for (int i = 1; i <= n; i++)
    {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}

void reverse_queue(queue<int> &q)
{
    int n = q.size();
    stack<int> st;

    // queue into stack

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        st.push(x);
    }
    // stack to queue

    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    // display
    display(q);
}

void removeAtEvenIDX(queue<int> q)
{
    int n = q.size();

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            q.pop();
        else
        {
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
    display(q);

    // cout << endl;
}

int main()
{

    // push, pop, front(top ni hota), size, empty, back

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    // cout << q.front()<< endl;
    // cout << q.back() << endl;
    // cout << q.size() << endl;

    // q.pop();
    // cout << q.front()<< endl;
    // cout << q.size() << endl;

    display(q);
    // q.pop();
    // display(q);

    reverse_queue(q);

    removeAtEvenIDX(q);

    cout << endl;
    return 0;
}