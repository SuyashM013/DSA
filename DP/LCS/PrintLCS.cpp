#include <bits/stdc++.h>
using namespace std;

vector<string> LCS(string &s1, string &s2) {
        // Code here
        int n = s1.size();
        int m = s2.size();
        vector<string> str;
        
        vector<vector<string>> dp(n+1, vector<string>(m+1, " "));
        
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<= m ; j++){
                if(s1[i-1] == s2[j-1] ){
                    dp[i][j] = dp[i-1][j-1]+s1[i-1];
                }
                else{
                    if(dp[i][j-1].size() > dp[i-1][j].size()){
                        dp[i][j] = dp[i][j-1];
                    }
                    else{
                        dp[i][j] = dp[i-1][j];
                    }
                }
            }
        }
        
        str.push_back(dp[n][m]);
        
        return str;
        
    }

int main()
{
    cout << endl;
    return 0;
}