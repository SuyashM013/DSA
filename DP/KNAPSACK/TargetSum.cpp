// leetcode - 494

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int f(vector<int> &arr, int n, int sum, vector<vector<int>> &dp)
    {
        if (n == 0)
            return (sum == 0) ? 1 : 0;
        if (dp[n][sum] != -1)
            return dp[n][sum];

        if (arr[n - 1] <= sum)
        {
            dp[n][sum] =
                f(arr, n - 1, sum, dp) + f(arr, n - 1, sum - arr[n - 1], dp);
        }
        else
            dp[n][sum] = f(arr, n - 1, sum, dp);

        return dp[n][sum];
    }
    int findTargetSumWays(vector<int> &nums, int target)
    {
        int n = nums.size();
        int sum = 0;
        for (auto a : nums)
        {
            sum += a;
        }
        int s1 = (target + sum);
        if (s1 % 2 != 0 || s1 < 0)
            return 0;
        vector<vector<int>> dp(25, vector<int>(1005, -1));

        return f(nums, n, s1 / 2, dp);
    }
};

int main()
{
    cout << endl;
    return 0;
}