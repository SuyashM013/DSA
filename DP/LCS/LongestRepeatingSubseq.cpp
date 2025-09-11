#include <bits/stdc++.h>
using namespace std;
int f(string &s1, string &s2, int n, int m, vector<vector<int>> &dp)
{
    if (n == 0 || m == 0)
        return 0;

    if (dp[n][m] != -1)
        return dp[n][m];

    if (s1[n - 1] == s2[m - 1] && n - 1 != m - 1)
    {
        return dp[n][m] = 1 + f(s1, s2, n - 1, m - 1, dp);
    }
    else
    {
        return dp[n][m] = max(f(s1, s2, n - 1, m, dp), f(s1, s2, n, m - 1, dp));
    }
}

int LongestRepeatingSubsequence(string &s)
{
    // Code here
    int n = s.size();
    // int m = s2.size();

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));

    return f(s, s, n, n, dp);
}

int main()
{
    cout << endl;
    return 0;
}