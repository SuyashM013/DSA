#include <bits/stdc++.h>
using namespace std;

// GFG ---------------------------------------------------
// Input: arr[] = [5, 2, 3, 10, 6, 8], target = 10
// Output: 3
// Explanation: The subsets {5, 2, 3}, {2, 8}, and {10} sum up to the target 10.
// ---------------------------------------------------------

class Solution
{
public:
    int f(vector<int> &arr, int target, int n, vector<vector<int>> &dp)
    {
        if (n == 0)
            return (target == 0) ? 1 : 0;

        if (dp[n][target] != -1)
            return dp[n][target];

        if (arr[n - 1] <= target)
        {
            dp[n][target] = f(arr, target, n - 1, dp) + f(arr, target - arr[n - 1], n - 1, dp);
        }
        else
            dp[n][target] = f(arr, target, n - 1, dp);

        return dp[n][target];
    }
    int perfectSum(vector<int> &arr, int target)
    {
        // code here
        int n = arr.size();
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        return f(arr, target, n, dp);
    }
};

int main()
{
    cout << endl;
    return 0;
}