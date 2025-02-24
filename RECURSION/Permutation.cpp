#include <iostream>
#include <vector>
using namespace std;

vector<int> per(vector<int> &ans, vector<int> arr, int in)
{
    int n = arr.size();
    if (in >= n)
    {
        return ans;
    }
    for (int i = in; i < n; i++)
    {
        // j++;
        ans.push_back(arr[i]);
        per(ans, arr, in + 1);
        ans.pop_back();
    }
}

int main()
{

    vector<int> arr = {1, 2, 3};
    vector<int> ans;
    vector<int> a = per(ans, arr, 0);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}

// class Solution {
//     public:
    
//     void solve(vector<vector<int>>& ans, vector<int> nums, int index){
//         if(index >= nums.size()){
//             ans.push_back(nums);
//             return;
//         }
    
//         for(int i = index; i<nums.size(); i++){
//             swap(nums[index], nums[i]);
//             solve(ans,nums, index+1);
//             swap(nums[index], nums[i]);
//         }
//     }
//         vector<vector<int>> permute(vector<int>& nums) {
//               vector<vector<int>> ans;
//               solve(ans, nums, 0);
//               return ans;
            
//         }
//     };