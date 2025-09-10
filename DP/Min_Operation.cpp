// Given a number n. Find the minimum number of operations required to reach n starting from 0. You have two operations available:

// Double the number
// Add one to the number
// Example 1:

// Input: n = 8
// Output: 4
// Explanation: 0 + 1 = 1 --> 1 + 1 = 2 --> 2 * 2 = 4 --> 4 * 2 = 8. GFG

#include <bits/stdc++.h>
using namespace std;

int f(int n, vector<int> &dp)
{
    if (n == 0)
        return 0;

    if (dp[n] != -1)
        return dp[n];

    if (n % 2 == 0)
    {
        return dp[n] = 1 + f(n / 2, dp);
    }
    else
        return dp[n] = 1 + f(n - 1, dp);
}
int minOperation(int n)
{
    // code here.
    vector<int> dp(n + 1, -1);

    return f(n, dp);
}

int main()
{
    cout << endl;
    return 0;
}