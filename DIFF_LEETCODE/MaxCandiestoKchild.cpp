// Leetcode - 2226

#include <iostream>
#include <vector>
using namespace std;

// Brute Force - 

class Solution {
    public:
    bool canDistribute(vector<int>& candies, int mid, long long k) {
        int n = candies.size();

        for (int i = 0; i < n; i++) {
            k -= candies[i] / mid;

            if (k <= 0) {
                return true;
            }
        }
        return k <= 0;
    }

    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size();
        long long total = 0;
        int mac = 0;
        for (int i = 0; i < n; i++) {
            mac = max(mac, candies[i]);
            total += candies[i];
        }
        if (total < k) {
            return 0;
        }

        int left = 1;
        int right = mac;
        int result = 0;
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (canDistribute(candies, mid, k)) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return result;
    
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