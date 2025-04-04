// Leetcode - 14

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

void display(vector<string> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i]<< endl;
    }
    cout << endl;
}

string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n == 1)
            return strs[0];
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[n-1];
        string s = "";
        for (int i = 0; i < (min(first.size(), last.size())); i++) {
            if (first[i] == last[i]) {
                s += first[i];
            } 
            else return s;
        }
        return s;
    }

int main()
{
    vector<string> s;
    s.push_back("flower");
    s.push_back("flow");
    s.push_back("flight");
    s.push_back("suyash");
    
    string su = longestCommonPrefix(s);
    cout << su; 

}
