// leetcode - 20
#include <iostream>
#include <stack>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        
        if (s.length() % 2 != 0) {
            return false;

        }
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.size() == 0) {
                     return false;
                }
                if ((st.top() == '(' && s[i] == ')') ||
                    (st.top() == '{' && s[i] == '}') ||
                    (st.top() == '[' && s[i] == ']')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        if (st.size() == 0)
            return true;
        else
            return false;

        
    }
};

int main()
{

    Solution s;
    string se = "{[]}";
    bool ans = s.isValid(se);
    cout << ans;

    cout << endl;
    return 0;
}