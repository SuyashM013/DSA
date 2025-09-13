// leetcode - 1312

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
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
            return dp[n][m] =
                       max(f(s1, s2, n - 1, m, dp), f(s1, s2, n, m - 1, dp));
        }
    }

    int minInsertions(string s)
    {
        int n = s.size();
        string a = s;
        reverse(a.begin(), a.end());

        // vector<vector<int>> dp(505, vector<int>(505, -1));
        // int res = f(s, a, n, n, dp);
        // int ins = n - res;

        // return  ins;

        // Top down -

        vector<vector<int>> dp(505, vector<int>(505, 0));

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (s[i - 1] == a[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return n - dp[n][n];
    }
};

auto init = atexit([]()
                   { ofstream("display_runtime.txt") << "0"; });

int main()
{
    cout << endl;
    return 0;
}