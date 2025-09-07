
// Given a rod of length n inches and an array price[], where price[i] denotes the value of a piece of length i. Your task is to determine the maximum value obtainable by cutting up the rod and selling the pieces.

// Note: n = size of price, and price[] is 1-indexed array.

// Example:

// Input: price[] = [1, 5, 8, 9, 10, 17, 17, 20]
// Output: 22
// Explanation: The maximum obtainable value is 22 by cutting in two pieces of lengths 2 and 6, i.e., 5 + 17 = 22.

#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution
{
public:
    int f(int i, int j, vector<int> &price, vector<vector<int>> &dp)
    {
        if (i == 0 || j == 0)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];

        if (i <= j)
        {
            return dp[i][j] = max(f(i - 1, j, price, dp), price[i - 1] + f(i, j - i, price, dp));
        }
        else
            return dp[i][j] = f(i - 1, j, price, dp);

        //   return dp[i][j];
    }

    int cutRod(vector<int> &price)
    {
        // code here
        int n = price.size();

        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));

        return f(n, n, price, dp);
    }
};

int main()
{
    cout << endl;
    return 0;
}