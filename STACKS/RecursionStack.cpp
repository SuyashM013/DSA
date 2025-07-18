#include <iostream>
#include <stack>
using namespace std;

void PrintRec(stack<int> a)
{
    if (a.size() == 0)
        return;
    int x = a.top();
    a.pop();
    PrintRec(a);
    cout << x << " ";
    a.push(x);
}
void PrintRecRev(stack<int> a)
{
    if (a.size() == 0)
        return;
    int x = a.top();
    cout << x << " ";
    a.pop();
    PrintRec(a);
    a.push(x);
}

void PushatBottom(stack<int> &a, int val)
{
    if (a.size() == 0)
    {
        a.push(val);
        return;
    }
    int x = a.top();
    a.pop();
    PushatBottom(a, val);
    a.push(x);
}

void ReverseStackRec(stack<int> &a){
    if(a.size() == 1) return;
    int x = a.top();
    a.pop();
    ReverseStackRec(a);
    // a.push(x);
    PushatBottom(a,x);
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

    PrintRec(st);
    cout << endl;

    PrintRecRev(st);
    cout << endl;

    PushatBottom(st, -10);
    cout << endl;

    PrintRec(st);
    cout << endl ;
    
    ReverseStackRec(st);
    PrintRec(st);
    cout << endl ;

    return 0;
}
