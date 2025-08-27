#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

int smoke(vector<int> &m, int p, int q)
{
    int ans = 0;
    for (int i = p; i <= q; i++)
    {
        ans = (ans % 100 + m[i] % 100) % 100;
    }
    return ans;
}

int cost(vector<int> &m, int i, int j, vector<vector<int>> &dp)
{
    if (i == j)
        return 0;
    int ans = INT_MAX;

    for (int k = i; k <= j-1; k++)
    {
        ans = min({ans,cost(m, i, k, dp) + cost(m, k + 1, j, dp) + smoke(m,i,k)*smoke(m,k+1,j)});
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> colors;
    vector<vector<int>> dp(105,vector<int>(105,-1));

    for(int i = 0; i<n; i++){
        int num;
        cin >> num;
        colors.push_back(num);
    }

    cout << cost(colors,0,colors.size()-1,dp);
    cout << endl;
    return 0;
}