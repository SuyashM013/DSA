// cses set

#include <iostream>
#include <vector>
using namespace std;

#define ll long long int

ll mod = 1000000007;
vector<ll> dp(1000005, -1);

ll f(int n)
{
    if (n == 0)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    ll sum = 0;
    for (int i = 1; i <= 6; i++)
    {
        if ((n - i) < 0)
            break;
        sum = (sum % mod + f(n - i) % mod) % mod;
    }
    return dp[n] = sum % mod;
}

ll fb(int n){
    dp[0] = 1;
    for(int i = 1; i<=n; i++){
        ll sum = 0;
        for(int j = 1; j<=6; j++){
            if ((i - j) < 0)
            break;
        sum = (sum % mod + dp[i-j] % mod) % mod;

        }
        dp[i] = sum;
    }
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    // vector<long long> dp(1000005, -1);
    // cout << f(n) << " "<< fb(n);
    cout << fb(n);
    cout << endl;
    return 0;
}