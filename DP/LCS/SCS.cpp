// shortest common superseq print len and word

// len - GFG - shortestCommonSupersequence()
// word = leetcode - 1092 - f()

#include <bits/stdc++.h>
using namespace std;

int lcs(string &s1, string &s2, int n, int m, vector<vector<int>> &dp)
{
    if (n == 0 || m == 0)
        return 0;

    if (dp[n][m] != -1)
        return dp[n][m];

    if (s1[n - 1] == s2[m - 1])
    {
        return dp[n][m] = 1 + lcs(s1, s2, n - 1, m - 1, dp);
    }
    else
    {
        return dp[n][m] = max(lcs(s1, s2, n - 1, m, dp), lcs(s1, s2, n, m - 1, dp));
    }
}
// Function to find length of shortest common supersequence of two strings.
int shortestCommonSupersequence(string &s1, string &s2)
{
    // code here
    int n = s1.size();
    int m = s2.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    int a = lcs(s1, s2, n, m, dp);

    int total = n + m;

    return total - a;
}

string f(string& str1, string& str2) {

        int n = str1.size();
        int m = str2.size();

        // Step 1: LCS using DP
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (str1[i - 1] == str2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        // Step 2: Reconstruct the Shortest Common Supersequence using
        // backtracking
        int i = n, j = m;
        string result = "";

        while (i > 0 && j > 0) {
            if (str1[i - 1] == str2[j - 1]) {
                result += str1[i - 1];
                i--;
                j--;
            } else if (dp[i - 1][j] > dp[i][j - 1]) {
                result += str1[i - 1];
                i--;
            } else {
                result += str2[j - 1];
                j--;
            }
        }
        //  adding remaining chars
        while (i > 0) {
            result += str1[i - 1];
            i--;
        }
        while (j > 0) {
            result += str2[j - 1];
            j--;
        }

        // ans is in reversed form b/c of backtracing
        reverse(result.begin(), result.end());
        return result;
    }

int main()
{
    string s1 = "abac", s2 = "cab";

    int a = shortestCommonSupersequence(s1, s2);

    cout << "Length of SCS - " << a<< endl << endl;

    f(s1, s2);

    cout << endl;
    return 0;
}