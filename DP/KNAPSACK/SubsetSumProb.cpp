#include <iostream>
#include <vector>
using namespace std;
bool f(vector<int> &arr, int sum, int n, vector<vector<int>> &dp)
{

    if (sum == 0)
        return 1;
    if (n <= 0)
        return 0;

    if (dp[n][sum] != -1)
        return dp[n][sum];

    if (arr[n - 1] <= sum)
    {

        return dp[n][sum] = f(arr, sum, n - 1, dp) || f(arr, sum - arr[n - 1], n - 1, dp);
    }
    else
        return f(arr, sum, n - 1, dp);
}

int main()
{
    // return true/false if the given sum can be achived from the array's subset
    cout << endl;
    return 0;
}