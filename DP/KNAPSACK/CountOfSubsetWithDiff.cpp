// Count the number of subset with a given difference

#include <bits/stdc++.h>
using namespace std;

int f(vector<int>& arr, int n, int s1, vector<vector<int>>& dp){

    if(n == 0) return (s1 == 0) ? 1 : 0;

    if(dp[n][s1] != -1) return dp[n][s1];

    if(arr[n-1] <= s1){
        dp[n][s1] = f(arr,n-1, s1,dp) + f(arr,n-1,s1-arr[n-1], dp);

    }
    else dp[n][s1] = f(arr, n-1, s1, dp);

    return dp[n][s1];

}

int main()
{
    vector<int> arr = {1,1,2,3};
    int n = arr.size();
    int diff = 1;

    int sum = 0;
    for(auto a : arr){
        sum +=a;
    }

    int s1 = (diff + sum)/2;

    vector<vector<int>> dp(n+1, vector<int>(s1+1, -1));


    cout << f(arr,n,s1,dp);


    cout << endl;
    return 0;
}