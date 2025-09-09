// GFG

// Given a set of items, each with a weight and a value, represented by the array wt and val respectively. Also, a knapsack with a weight limit capacity.
// The task is to fill the knapsack in such a way that we can get the maximum profit. Return the maximum profit.
// Note: Each item can be taken any number of times.

// Examples:

// Input: val = [1, 1], wt = [2, 1], capacity = 3
// Output: 3
// Explanation: The optimal choice is to pick the 2nd element 3 times.

#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution
{
public:
    int f(int n, vector<int> &val, vector<int> &wt, int capacity, vector<vector<int>> &dp)
    {
        if (n == 0 || capacity == 0)
            return 0;

        if (dp[n][capacity] != -1)
            return dp[n][capacity];

        if (wt[n - 1] <= capacity)
        {
            return dp[n][capacity] = max(f(n - 1, val, wt, capacity, dp), val[n - 1] + f(n, val, wt, capacity - wt[n - 1], dp));
        }
        else
            return dp[n][capacity] = f(n - 1, val, wt, capacity, dp);
    }

    int knapSack(vector<int> &val, vector<int> &wt, int capacity)
    {
        // code here
        int n = val.size();
        vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, -1));
        return f(n, val, wt, capacity, dp);

        
    }
};

int main()
{
    cout << endl;
    return 0;
}