// given a array and want to rotate it by K steps
// leetcode - 2

#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;
}

void reversePart(int start, int end, vector<int> &v)
{
    while (end >= start)
    {
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }
}

int main()
{

    vector<int> v2;

    v2.push_back(3);
    v2.push_back(1);
    v2.push_back(12);
    v2.push_back(22);
    v2.push_back(26);
    v2.push_back(72);
    v2.push_back(9);
    v2.push_back(91);

    display(v2);

    int k = 3;

    int n = v2.size();

    reversePart(0, n - k - 1, v2);
    reversePart(n - k, n - 1, v2);
    reversePart(0, n - 1, v2);

    display(v2);

    return 0;
}