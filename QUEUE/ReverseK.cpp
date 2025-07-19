#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void display(queue<int> q){
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

void reverse_K(queue<int> &q, int k){

    int n = q.size();
    int rem = n-k;
    stack<int> st;
    if(k>n){
        cout << "Invalid K";
        return ;
    }
    
    for(int i = 0; i< k; i++){
        int x = q.front();
        q.pop();
        st.push(x);

    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    for(int i = 0; i< rem; i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }

    display(q);
}

int main()
{

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(9);
    q.push(2);
    q.push(5);
    q.push(6);

    display(q);

    reverse_K(q, 8);


    cout << endl;
    return 0;
}