// Leetcode - 2460

#include <iostream>
#include <vector>
using namespace std;

void applyOperations(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;

    vector<int> ans(n, 0);

    if (n < 3)
    {
        swap(nums[0], nums[n]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            nums[i] = 2 * nums[i];
            nums[i + 1] = 0;
        }
        // if(nums[i] != 0) count++;
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            ans[count] = nums[i];
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    cout << count;
}

int main()
{

    vector<int> nums = {1, 2, 2, 1, 1, 0, 0, 1, 3, 5, 0, 1};
    int n = nums.size();

    applyOperations(nums);

    // for(int i = 0; i<n; i++){
    //     cout << nums[i] << " ";
    // }
    cout << endl;
    return 0;
}