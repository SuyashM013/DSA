// Leetcode - 2401
#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
    
    
         int longestNiceSubarray(vector<int>& nums) {
    
            int n = nums.size();
            int i = 0;
             int j =0;
             int result = 1;
             int mask = 0;
    
             while(j<n){
                while((mask & nums[j]) != 0){
                    mask = mask ^ nums[i];
                    i++;
                }
                result = max(result, j-i+1);
                mask = mask | nums[j];
                j++;
    
             }
             return result;
    
    
    
            // O(N^2 ) Brute Force 
    
            // int result = 1;
            // for(int i = 0; i<nums.size(); i++){
            //     int mask = 0;
            //     for(int j = i; j<nums.size(); j++){
            //         if((mask & nums[j]) != 0){
            //             break;
    
            //         }
            //         mask |= nums[j];
            //         result = max(result, j-i+1);
            //     }
            // }
            // return result;
        }
    };

void try1(vector<int> nums)
{
    int maxlen = 0;
    int len = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // if( nums[i] & nums[j] == 0){
            //     maxlen++;
            // }
            cout << nums[i] << " " << nums[j];
        }
        // len = max(maxlen, len);
        // maxlen = 0;
    }
    cout << endl;

    // return len;
}

int check(vector<int> ans)
{
    int ansmax = 0;
    for (int i = 1; i < ans.size(); i++)
    {
        int c = ans[i] & ans[i - 1];
        if (c == 0)
        {
            ansmax++;
        }
    }
    return ansmax;
}

int subarray(int arr[], int len )
{
    vector<int> ans;
    vector<int> res;
    for (int i = 0; i < len; i++)
    {
        for (int k = i; k < len; k++)
        {
            for (int j = i; j <= k; j++)
            {
                ans.push_back(arr[j]);
            }
            int ans2 = check(ans);
            res.push_back(ans2);
            ans.clear();
        }
    }
    int max = 0;
    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] > max)
        {
            max = res[i];
        }
    }
    return max;
}

int main()
{
    int n = 5;
    int arr[n] = {1,3,8,48,10};

    // try1(arr);
    int a = subarray(arr, n);
    cout << a;

    // int a = 3;
    // int b = 10;

    // int c = a & b;
    // cout << c << endl;
    cout << endl;
    return 0;
}