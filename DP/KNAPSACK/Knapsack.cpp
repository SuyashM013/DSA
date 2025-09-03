#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    //   int f(int w, vector<int>& val, vector<int>& wt, int n,vector<vector<int>> &dp ){

    //       if(n == 0 || w == 0) return 0;

    //       if(dp[n][w] != -1) return dp[n][w];
    //       int pick =0;

    //       if(wt[n-1] <= w){
    //           pick = val[n-1] + f(w-wt[n-1], val, wt, n-1,dp);
    //       }
    //       int notpick = f(w,val,wt,n-1,dp);

    //       return dp[n][w] = max(pick, notpick);

    //   }
    int knapsack(int W, vector<int> &val, vector<int> &wt)
    {
        // code here
        int n = val.size();
        vector<vector<int>> dp(n + 1, vector<int>(W + 1));
        // return f(W, val, wt, n, dp);

        // dp[0][0] = 0;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= W; j++)
            {
                if (i == 0 || j == 0)
                    dp[i][j] = 0;
                else
                {
                    int pick = 0;

                    if (wt[i - 1] <= j)
                    {
                        pick = val[i - 1] + dp[i - 1][j - wt[i - 1]];
                    }
                    int notpick = dp[i - 1][j];

                    dp[i][j] = max(pick, notpick);
                }
            }
        }

        return dp[n][W];
    }
};
int main()
{
    cout << endl;
    return 0;
}