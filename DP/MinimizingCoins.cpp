// cses problem

#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int f(int x, vector<int>coins, vector<int>& dp)
{
    if (x == 0)
        return 0;
    if (dp[x] != -1)
        return dp[x];
    int result = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        if (x - coins[i] < 0)
            continue;
        result = min(result, f(x - coins[i], coins, dp));
    }
    if(result == INT_MAX) return dp[x] = INT_MAX;

    return dp[x] = 1 + result;
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> coins;
    vector<int> dp(1000006, -1);
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        coins.push_back(num);

    }
    int ans = f(x, coins, dp);
    if(ans == INT_MAX) cout <<"-1";
    else cout << ans;
    cout << endl;
    return 0;
}