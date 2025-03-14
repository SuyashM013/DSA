// Leetcode - 2226

#include <iostream>
#include <vector>
using namespace std;

// Brute Force - 

class Solution {
    public:
        int maximumCandies(vector<int>& candies, long long k) {
            int n = candies.size();
    
            // Brute Force
    
            // int total = 0;
            // int mac = 0;
            // for (int i = 0; i < n; i++) {
            //     // mac = max(mac, candies[i]);
            //     total += candies[i];
            // }
            // if(total < k){
            //     return 0;
            // }
            // for(int i = mac; i>=1; i--){
            //     int count = 0;
    
            //     for(int j = 0; j<n; j++){
            //         count += candies[j]/i;
            //     }
            //     if(count >= k){
            //         return i;
            //     }
            // }
            // return 0;
        }
    };


int main()
{
    cout << endl;
    return 0;
}