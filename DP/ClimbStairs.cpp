#include <iostream>
#include <vector>
using namespace std;

int countWaysRec(int n, vector<int>& dp) {

        // Base cases
        if (n == 0 || n == 1)
            return 1;

        if (dp[n] != -1)
            return dp[n];

        return dp[n] = countWaysRec(n - 1, dp) + countWaysRec(n - 2, dp);
    }

int main()
{
    cout << endl;
    return 0;
}