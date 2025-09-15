#include <bits/stdc++.h>
using namespace std;

int cost(vector<int>& m, int i, int j, vector<vector<int>>& dp){
    if(i == j || i+1 == j) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    int ans = INT_MAX;

    for(int k = i+1; k<j; k++){
        ans = min({ans,cost(m,i,k,dp)+ cost(m,k,j,dp) +m[i]* m[j]* m[k] });
    }
    return dp[i][j] = ans;

}

int main()
{
    int n;
    cin >> n;
    vector<int> m;
    vector<vector<int>> dp(10000, vector<int>(10000, -1));
    for(int i = 0; i<n ; i++){
        int tem;
        cin >> tem;
        m.push_back(tem);
    }
    cout << cost(m,0,n-1,dp);



    cout << endl;
    return 0;
}