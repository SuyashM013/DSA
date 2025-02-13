// Leetcode - 75 SOLVED

// sorting 0s, 1s, 2s

// class Solution
// {
// public:
//     void sortColors(vector<int> &nums)
//     {
//         int n = nums.size();

//         int noz = 0;
//         int noo = 0;
//         int noT = 0;

//         for (int i = 0; i < n; i++)
//         {
//             if (nums[i] == 0)
//                 noz++;
//             else if (nums[i] == 1)
//                 noo++;
//             else
//                 noT++;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (i < noz)
//                 nums[i] = 0;
//             else if (i < (noz + noo))
//                 nums[i] = 1;
//             else
//                 nums[i] = 2;
//         }
//         return;
//     }
// };

// DUTCH NATIONAL FLAG ALGORITHM

#include <iostream>
#include<vector>
using namespace std;

void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;
}


int main()
{

    vector<int> v2;

    v2.push_back(0);
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(2);
    v2.push_back(0);
    v2.push_back(1);
    v2.push_back(0);
    v2.push_back(1);

    int start = 0;
    int mid = 0;
    int end = v2.size()-1;

    while(mid<=end){
        if(v2[mid] == 0){
            swap(v2[mid],v2[start]);
                start++;
                mid++;
        }
        else if(v2[mid] == 2){
            swap(v2[mid],v2[end]);
            end--;
        }
        else if(v2[mid] == 1){
            mid++;
        }
            
        }
    
    display(v2);


    cout << endl;
    return 0;
}