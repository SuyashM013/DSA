#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;

vector<int> topKFrequent(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    for (auto a : nums)
    {
        mp[a]++;
    }
    priority_queue<pi, vector<pi>, greater<pi>> pq;

    for (auto x : mp)
    {
        int ele = x.first, freq = x.second;
        pair<int, int> p = {freq, ele};
        pq.push(p);
        if (pq.size() > k)
            pq.pop();
    }

    vector<int> ans;
    while (!pq.empty())
    {
        int ele = pq.top().second;
        ans.push_back(ele);
        pq.pop();
    }

    return ans;
}

int main()
{

    cout << endl;
    return 0;
}