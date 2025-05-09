#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> a)
{
    stack<int> temp(a);

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
}

void printAtIndex(stack<int>& a, int idx, int val){
    
    
}

int main()
{

    stack<int> st;
    stack<int> gt;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);
    cout << endl
         << endl;

    int val = 100;
    while (!st.empty())
    {
        gt.push(st.top());
        st.pop();
    }
    gt.push(val);

    while (!gt.empty())
    {
        st.push(gt.top());
        gt.pop();
    }
    print(st);

    cout << endl;
    return 0;
}
