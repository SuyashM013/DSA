#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> a)
{
    stack<int> temp;

    while (!a.empty())
    {
        temp.push(a.top());
        a.pop();
    }
    while(!temp.empty()){
        cout << temp.top() << " ";
        a.push(temp.top());
        temp.pop();
    }
}

void printAtIndex(stack<int>& st, int idx, int val){
    stack<int> gt;

//     if(idx > st.size() && idx < 0) {cout << "Invalid Index" << endl;
// }
    while (st.size() > idx)
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

    int val1 = 200;
    cout << endl;

    printAtIndex(st, 2, val1 );
    print(st);
    cout << endl;

    cout << endl;
    return 0;
}
