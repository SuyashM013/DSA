#include <iostream>
#include <vector>

class Solution
{
public:
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
    bool equalPartition(vector<int> &arr)
    {
        // code here
        int n = arr.size();

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));

        if (sum % 2 == 0)
        {
            return f(arr, sum / 2, n, dp);
        }
        else
            return false;
    }
};
using namespace std;
int main()
{
    // return true if the array is divided into 2 parts such that both part have the same sum
    cout << endl;
    return 0;
}