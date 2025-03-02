// Leetcode - 2570

#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> merge(vector<vector<int>>& nums1, vector<vector<int>>& nums){

    vector<vector<int>> ans;
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < nums1.size() && j<nums.size()){
        if(nums1[i][0] == nums[j][0]){
            // ans[k][1] == (nums[j][1] + nums1[i][1]);
            // j++;
            // i++;
            // k++;
            ans.push_back({nums1[i][0], nums1[i][1] + nums[j][1]});
            i++;
            j++;
        }
        else if(nums1[i][0] < nums[j][0]){
            // ans[k][1] = nums1[i][1];
            // i++;
            // k++;
            // ans[k][1] = nums[j][1];
            // k++;
            // j++;

            ans.push_back({nums1[i][0], nums1[i][1]});
            i++;
            ans.push_back({nums[j][0], nums[j][1]});
            j++;

        }
    }

    while(i <= nums1.size()-1){
        // ans[k] = nums1[i];
        //     k++;
        //     i++;

        ans.push_back({nums1[i][0], nums1[i][1]});
        i++;
    }
    while(j <= nums.size()-1){
        // ans[k] = nums[j];
        //     j++;
        //     k++;
        ans.push_back({nums[j][0], nums[j][1]});
        j++;
    }

    return ans;

}

int main()
{


    vector<vector<int>>v1 = {{1,2}, {2,3}, {4,5}};
    vector<vector<int>>v2 = {{1,4}, {3,2}, {4,1}};
    // vector<vector<int>>ans;
    vector<vector<int>>ans = merge(v1, v2);

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}