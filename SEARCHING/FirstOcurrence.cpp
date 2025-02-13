#include <iostream>
using namespace std;
int main()
{

    int a = 13;
    int nums[a] = {1,2,2,3,3,3,3,3,4,4,5,5,9};

    int x = 4;

    int beg = 0;
    int end = a - 1;
    bool flag = false;

    while (beg <= end)
    {
        int mid = beg + (end - beg) / 2;

        if (x == nums[mid])
        {
            if(nums[mid-1] != x){
                flag= true;
                cout << mid;
                break;
            }
             else{
                end = mid -1;

            }
        }

        else if (x < nums[mid])
            end = mid - 1;
        else
            beg = mid + 1;
    }
    

    cout << endl;
    return 0;
}