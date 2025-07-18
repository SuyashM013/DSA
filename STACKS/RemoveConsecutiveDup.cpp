#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

void RemoveConDup(string a){
    stack<char> st;
    int n = a.length();

    st.push(a[0]);
    for(int i = 1; i<n; i++){
        if(st.top() != a[i]) st.push(a[i]);
    }

    stack<char> temp;
    while(!st.empty()){
        // cout << st.top() << " ";
        char x = st.top();
        temp.push(x);
        st.pop();
    }
    // while(!temp.empty()){
    //     cout << temp.top()<<" ";
    //     char x = temp.top();
    //     st.push(x);
    //     temp.pop();
    // }


    string s = "";
    while(!temp.empty()){
        s += temp.top();
        char x = temp.top();
        st.push(x);
        temp.pop();
    }
    cout << s;


}

int main(){

    string exp = "aaaaaaaaaaaaaaaabbbaabnbbbbbbbbbbcc";
    sort(exp.begin(), exp.end());
    cout << exp << endl;

    RemoveConDup(exp);


  cout<< endl;
    return 0;
}