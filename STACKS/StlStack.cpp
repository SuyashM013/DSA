#include <iostream>
#include <stack>

using namespace std;


int main()
{

    stack<int> st;

    // cout << st.size();
    
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    
    cout << st.size() << endl;

    // Print in reverse order

    // while(!st.empty()){
    //     cout << st.top() << " ";
    //     st.pop();
    // }
    // Stack empty ho gaya


    // Extra space use hoga
    // Store kara denge remove ke pahle new stack me

    stack<int> co;

    while(!st.empty()){
        cout << st.top() << " ";
        int x = st.top();
        co.push(x);
        st.pop();
    }
    cout << endl;
    while(!co.empty()){
        cout << co.top() << " ";
        int x = co.top();
        st.push(x);
        co.pop();
    }

    // cout << st.top();


    // st.pop();
    // cout << st.size() << endl;
    // cout <<st.top();

    cout << endl;
    return 0;
}