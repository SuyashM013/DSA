// Leetcode - 2529

class Solution {
    public:
    int binarysearch(vector<int> nums, int beg, int end, int data){
        while(beg <= end){
            int mid = beg + (end - beg)/2;
    
            if(nums[mid] <= data){
                beg = mid + 1;
    
            }
            else{
                end = mid - 1;
            }
        }
        return beg;
    }
        int maximumCount(vector<int>& nums) {
            int n = nums.size();
            int beg = 0;
            int end = n-1;
            int negposition = binarysearch(nums, beg, end, -1);
            int posposition = binarysearch(nums, negposition, end, 0);
            int poscount = (n - posposition);
    
            return max(negposition, poscount);
    
    
    
    
    
            // int greater = 0, smaller = 0;
    
            // for(int i = 0; i<n; i++){
            //     if(nums[i] < 0){
            //         smaller++;
            //     }
            //     if(nums[i] >= 1){
            //         greater++;
            //     }
            // }
            // return max(greater, smaller);
    
    
        }
    };