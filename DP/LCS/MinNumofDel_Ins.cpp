// Given two strings s1 and s2. The task is to remove or insert the minimum number of characters from/in s1 to transform it into s2. It could be possible that the same character needs to be removed from one point of s1 and inserted into another point.

// Examples :

// Input: s1 = "heap", s2 = "pea"
// Output: 3
// Explanation: 'p' and 'h' deleted from heap. Then, 'p' is inserted at the beginning.

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

int minOperations(string &s1, string &s2)
{
    // Your code goes here
    int n = s1.size();
    int m = s2.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    int a = f(s1, s2, n, m, dp);

    int del = n - a;
    int ins = m - a;

    return del + ins;
}

int main()
{

    string s1 = "heap", s2 = "pea";
    cout << minOperations(s1,s2);
    cout << endl;
    return 0;
}