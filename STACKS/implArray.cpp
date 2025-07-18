#include <iostream>
using namespace std;

class Stack
{
    int arr[5];
    int idx = -1;

public:
    void push(int val)
    {
        if(idx ==4){
            cout << "Stack if FULL" << endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }

    void pop(){
        if(idx == -1){
            cout << "Stack is Empty" << endl;
        }
        idx--;
    }
    int top(){
        if(idx == -1){
            cout << "Stack is Empty" << endl;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
};

int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    cout << st.size();

    // st.pop();
    cout << endl;
cout << "Top : " << st.top();
    // cout << st.size();
    cout << endl;
    return 0;
}