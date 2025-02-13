// leetcode - 42 HSRD

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int trap(vector<int>& height) {
    if (height.empty()) return 0;
    
    int n = height.size();
    vector<int> leftMax(n), rightMax(n);
    
    leftMax[0] = height[0];
    for (int i = 1; i < n; ++i) {
        leftMax[i] = max(leftMax[i-1], height[i]);
    }
    
    rightMax[n-1] = height[n-1];
    for (int i = n-2; i >= 0; --i) {
        rightMax[i] = max(rightMax[i+1], height[i]);
    }
    
    int waterTrapped = 0;
    for (int i = 0; i < n; ++i) {
        waterTrapped += min(leftMax[i], rightMax[i]) - height[i];
    }
    
    return waterTrapped;
}

int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << "Water trapped: " << trap(height) << endl;
    return 0;
}
