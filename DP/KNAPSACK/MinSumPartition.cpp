// GFG
// Input: arr[] = [1, 6, 11, 5]
// Output: 1
// Explanation:
// Subset1 = {1, 5, 6}, sum of Subset1 = 12
// Subset2 = {11}, sum of Subset2 = 11
// Hence, minimum difference is 1.

#include <bits/stdc++.h>

using namespace std;

class Solution
{

public:
    int f(vector<int> &arr, int n, int sum, int Calsum, vector<vector<int>> &dp)
    {

        if (n == 0)
            return abs((sum - Calsum) - Calsum);

        if (dp[n][Calsum] != -1)
            return dp[n][Calsum];

        return dp[n][Calsum] = min(f(arr, n - 1, sum, Calsum, dp), f(arr, n - 1, sum, Calsum + arr[n - 1], dp));
    }

    int minDifference(vector<int> &arr)
    {
        // Your code goes here
        int n = arr.size();
        int sum = 0;
        for (auto a : arr)
        {
            sum += a;
        }
        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
        return f(arr, n, sum, 0, dp);
    }
};

int main()
{
    cout << endl;
    return 0;
}