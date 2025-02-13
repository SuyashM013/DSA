#include <iostream>
#include <string>
using namespace std;

int DanceRev(int n, string arr[])
{

    string left_foot = "start";
    string right_foot = "start";
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        // if (left_foot == arr[i] || right_foot == arr[i])
        // {
        //     continue;
        // }
        // else if (left_foot == "start"){
        //     left_foot = arr[i];
        //     count++;
        // }
        // else if(right_foot == "start"){
        //     right_foot = arr[i];
        //     count++;
        if (left_foot == "start" || right_foot == "start")
        {
            left_foot = arr[i];
            right_foot = arr[i + 1];
            continue;
        }
        else
        {
            if (left_foot == arr[i] || right_foot == arr[i])
            {
                continue;
            }
            else if (left_foot == arr[i + 1])
            {
                
            }
        }
        return count;
    }
}

    int main()
    {
        int a = 6;
        string arr[6] = {
            "down", "right", "down", "up", "right", "down"};

        // int a = 8;
        // string arr[8] = {"up", "right", "down", "up", "up", "down", "right", "left"};

        int ans = DanceRev(a, arr);
        cout << ans << endl;

        cout << endl;
        return 0;
    }