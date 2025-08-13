#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
// ONLY IF NUMS == +ve VALUESS 
    int subarraySum(vector<int>& nums, int k) {
        unordered_set<int> st;
        int n = nums.size();
        vector<int> arr(n);
        arr[0] = nums[0];
        for (int i = 1; i < n; i++) {
            arr[i] = arr[i - 1] + nums[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] < k)
                st.insert(arr[i]);
            else if (arr[i] == k) {
                st.insert(arr[i]);
                count++;
            } else {
                int rem = arr[i] - k;
                if (st.find(rem) != st.end())
                    count++;
                st.insert(arr[i]);
            }
        }

        return count;
    }
};

int main()
{
    cout << endl;
    return 0;
}