// CSES question  , reduce to 0 using digits in N

#include <iostream>
#include <vector>
using namespace std;

int maxdigit(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans = max(ans, n % 10);
        n /= 10;
    }
    return ans;
}

int f(int a, vector<int> &dp)
{
    if (a == 0)
        return 0;
    dp[0] = 0;
    // if(a <= 9) return a;
    if(dp[a] != -1) return dp[a];
    return dp[a] = 1 + f(a - maxdigit(a), dp);
}

int main()
{
    int a;
    cin >> a;
    vector<int> dp(a + 1, -1);
    int ans = f(a, dp);
    cout << ans;
    cout << endl;
    return 0;
}
