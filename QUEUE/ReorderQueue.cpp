#include <iostream>
#include <stack>
#include <queue>
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

void reorder(queue<int>& q){
    stack<int> st;
    int n = q.size();

    // aadhe ko stack me dalo
    for(int i = 0; i < n/2; i++){
        st.push(q.front());
        q.pop();
    }

// un aadho ko queue me push kara do to piche a jayge
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    // ab aage walo ko stack me dalo
    for(int i = 0; i<n/2; i++){
        st.push(q.front());
        q.pop();
    }

    // fir sabhi ko queue me dalo jab tk stack khali ni hota
    while(!st.empty()){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }

    // fir us queue ko reverse kr lo
    for(int i = 0; i<n; i++){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}

int main()
{
    queue<int> q;
    

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    display(q);
    reorder(q);
    display(q);
    
    

    cout << endl;
    return 0;
}