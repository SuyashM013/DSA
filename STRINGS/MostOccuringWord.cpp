#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;

void display(vector<string> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << endl;
    }
    cout << endl;
}

int main()
{

    string str = "is is is si si sis si si is beter is than anything";

    stringstream ss(str);
    vector<string> v;

    string temp;
    while (ss >> temp)
    {
        v.push_back(temp);
    }

    // for(int i = 0; i<v.size(); i++){
    //     cout << v[i]  << endl;
    // }

    display(v);
    cout
        << endl;
    sort(v.begin(), v.end());
    display(v);

    int count = 1;
    int maxcount = 1;

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;

        maxcount = max(maxcount, count);
    }

    count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;

        if (count == maxcount)
        {
            cout << v[i] << " " << maxcount << endl;
        }
    }
  

    return 0;
}