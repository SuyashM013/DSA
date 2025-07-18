#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> a){
    stack<int> temp(a);

     while(!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }

}
int main()
{
    

    stack<int> st;
    stack<int> gt;
    stack<int> rt;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    cout << endl << endl;

    while(!st.empty()){
        gt.push(st.top());
        st.pop();
    }
    while(!gt.empty()){
        rt.push(gt.top());
        gt.pop();
    }
    while(!rt.empty()){
        // cout << rt.top()<< ' ';
        st.push(rt.top());
        rt.pop();
    }

    print(st);



    cout << endl;
    return 0;
}