// Given an integer array coins[ ] representing different denominations of currency and an integer sum, find the number of ways you can make sum by using different combinations from coins[ ]. 
// Note: Assume that you have an infinite supply of each type of coin. Therefore, you can use any coin as many times as you want.
// Answers are guaranteed to fit into a 32-bit integer. 

// Examples:

// Input: coins[] = [1, 2, 3], sum = 4
// Output: 4
// Explanation: Four Possible ways are: [1, 1, 1, 1], [1, 1, 2], [2, 2], [1, 3].

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int f(int n, vector<int> &coins, int sum, vector<vector<int>> &dp)
    {
        if (n == 0)
            return (sum == 0) ? 1 : 0;

        if (dp[n][sum] != -1)
            return dp[n][sum];

        if (coins[n - 1] <= sum)
        {
            return dp[n][sum] = f(n - 1, coins, sum, dp) + f(n, coins, sum - coins[n - 1], dp);
        }
        else
            return dp[n][sum] = f(n - 1, coins, sum, dp);
    }
    int count(vector<int> &coins, int sum)
    {
        // code here.
        int n = coins.size();
        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));

        return f(n, coins, sum, dp);
    }
};

int main()
{
    cout << endl;
    return 0;
}