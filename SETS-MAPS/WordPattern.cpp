// lettcode - 290

#include <iostream>
#include <vector>
#include <String>
#include <unordered_map>
#include <set>
using namespace std;

void split(string s, vector<string> &a)
{
    string temp = " ";

    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] != ' ')
            temp += s[i];
        else
        {
            a.push_back(temp);
            temp = " ";
        }
    }
    a.push_back(temp);
}

int main()
{
    string pattern = "abba";
    string s = "dog cat cat dog";
    unordered_map<char, string> m;
    bool res = true;
    vector<string> a;
    set<string> st;

    split(s, a);

    for (int i = 0; i < pattern.size(); i++)
    {
        if (m.find(pattern[i]) != m.end())
        {
            if (m[pattern[i]] != a[i])
            {
                res = false;
            }
        }
        else
        {
            if (st.count(a[i]) > 0)
                res = false;
            m[pattern[i]] = a[i];
            st.insert(a[i]);
        }
    }
    

    cout << res;

    cout << endl;
    return 0;
}