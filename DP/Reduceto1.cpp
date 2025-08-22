#include <iostream>
#include <vector>
using namespace std;

#define inf INT16_MAX

int f(int n, vector<int> &dp)
{
    if (n == 1 || n == 2 || n == 3)
        return 1;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = 1 + min(f(n - 1, dp), min((n % 2 == 0) ? f(n / 2, dp) : inf, (n % 3 == 0) ? f(n / 3, dp) : inf));
}

int main()
{
    int a = 100;
    vector<int> dp(1005, -1);
    int ans = f(a, dp);
    cout << ans;
    cout << endl;
    return 0;
}