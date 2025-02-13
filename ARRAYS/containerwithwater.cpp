// Leetcode - 11

// use 2 pointer technique 

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         if (height.empty())
//             return 0;

//         int n = height.size();
//         vector<int> leftMax(n), rightMax(n);

//         leftMax[0] = height[0];
//         for (int i = 1; i < n; ++i) {
//             leftMax[i] = max(leftMax[i - 1], height[i]);
//         }

//         rightMax[n - 1] = height[n - 1];
//         for (int i = n - 2; i >= 0; --i) {
//             rightMax[i] = max(rightMax[i + 1], height[i]);
//         }

//         int p,q,x,y;
//         for(int i = 0; i <n-1; i++){
//             if(leftMax[i] - height[i] == 0 && height[i] >= height[i+1]){
//                 p = leftMax[i];
//                 x = i;
//                 break;
//             }
//         }
//         for(int i = n-1; i >=0; i--){
//             if(rightMax[i] - height[i] == 0){
//                 q = rightMax[i];
//                 y = i;
//                 break;
//             }
//         }
//         int count = 0;
//         for(int i = x; i<y; i++){
//             count++;
//         }

//         int result = min(p,q) * (count);

//         return result;



//     }
// };