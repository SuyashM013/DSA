// leetcode - 62

#include <iostream>
#include <vector>
using namespace std;

// int helper(int sr, int sc, int er, int ec, vector<vector<int>>& dp){
    //     if(sr == er && sc == ec) return 1;
    //     if(sr > er || sc > ec) return 0;
    //     if(dp[sr][sc] != -1) return dp[sr][sc];
    //     return dp[sr][sc] = helper(sr, sc+1, er, ec,dp) + helper(sr+1, sc,
    //     er, ec,dp);

    // }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, 1));
        // return helper(0,0,m-1,n-1, dp);

        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[m - 1][n - 1];
    }

int main()
{
    cout << endl;
    return 0;
}