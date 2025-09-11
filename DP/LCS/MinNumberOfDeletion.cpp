// nput: s = "aebcbda"
// Output: 2
// Explanation: Remove characters 'e' and 'd'. Resultant string will be "abcba" which is a palindromic string.

#include <bits/stdc++.h>
using namespace std;

int f(string &s1, string &s2, int n, int m, vector<vector<int>> &dp)
{
    if (n == 0 || m == 0)
        return 0;

    if (dp[n][m] != -1)
        return dp[n][m];

    if (s1[n - 1] == s2[m - 1])
    {
        return dp[n][m] = 1 + f(s1, s2, n - 1, m - 1, dp);
    }
    else
    {
        return dp[n][m] = max(f(s1, s2, n - 1, m, dp), f(s1, s2, n, m - 1, dp));
    }
}

int minDeletions(string &s)
{
    // code here
    int n = s.size();
    string a = s;
    reverse(a.begin(), a.end());

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));

    int x = f(s, a, n, n, dp);

    return n - x;
}

int main()
{
    cout << endl;
    return 0;
}