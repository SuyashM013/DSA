#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pp;
vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    int n = arr.size();
    priority_queue<pp> pq;

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int rem = abs(arr[i] - x);

        pq.push({rem, arr[i]});

        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    while (!pq.empty())
    {
        int x = pq.top().second;
        ans.push_back(x);
        pq.pop();
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    cout << endl;
    return 0;
}