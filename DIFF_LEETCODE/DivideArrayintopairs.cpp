// Leetcode  - 2206

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        bool divideArray(vector<int>& nums) {
            int n = nums.size();
    
            sort(nums.begin(), nums.end());
            if(n%2==0){
                for(int i = 0; i<n; i+=2){
                    if(nums[i] != nums[i+1]){
                        return false;
                        break;
                    }
                    
                }
    
            }
         return true;
            
        }
    };

void print(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl ;
}

int main()
{
    vector<int> a = {18, 19, 5, 5, 18, 19, 5, 6, 12, 19, 13, 4, 16, 11, 4, 16, 10, 8, 12, 8, 2, 1, 8, 17, 4, 18, 3, 5, 16, 2, 16, 12, 17, 16, 7, 16, 2, 17, 19, 9, 1, 20, 17, 17, 4, 6};
    sort(a.begin(), a.end());

    // print(a);

    vector<int> b = {9,2,3,4};
    vector<int> c = {5,2,3,2};

    if(b.end() > c.end()){
        cout << "b is greater than c"  << *(--b.end()) << endl;
    }
    else{
        cout << "c is greater than b" << endl;
    }

    

    cout << endl;
    return 0;
}