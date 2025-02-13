#include <iostream>
using namespace std;
int main()
{

    int a = 8;
    int nums[a] = {1,
                   2,
                   3,
                   4,
                   5,
                   6,
                   7,
                   8};

    int x = 10;

    int beg = 0;
    int end = a - 1;

    while (beg <= end)
    {
        int mid = beg + (end - beg) / 2;

        if (x == nums[mid])
        {
            cout << mid;
            break;
        }

        else if (x < nums[mid])
            end = mid - 1;
        else
            beg = mid + 1;
    }
    

    cout << endl;
    return 0;
}