#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr = {6, 5, 3, 2, 8, 10, 9};
    int n = arr.size();
    int k = 3;
    priority_queue<int, vector<int>, greater<int>> pq;
    // vector<int> ans;
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
        {
            // ans.push_back(pq.top());
            arr[idx++] = pq.top();
            pq.pop();
        }
    }
    while (!pq.empty())
    {
        //  ans.push_back(pq.top());
        arr[idx++] = pq.top();
        pq.pop();
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}