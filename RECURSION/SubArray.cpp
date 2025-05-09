// subarray matlab subsequence jo ki continous fashion me ho 
// subset alag hote or sub array alag hote

#include <iostream>
#include <vector>
using namespace std;

// loops se
void subarray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int k = i; k < len; k++)
        {
            for (int j = i; j <= k; j++)
            {
                cout << arr[j];
            }
            cout << endl;
        }
    }
}

//  Recursion se ab kare -

void subarrayrec(vector<int> v, int arr[], int n, int idx)
{
    if (idx == n)
    {
        int a = 0;
        for (int i = 0; i < v.size(); i++)
        {
            a ^= v[i];
            // COut kr dena
        }
        cout << a << " ";
        return;
    }
    subarrayrec(v, arr, n, idx + 1);
    if (v.size() == 0)
    {
        v.push_back(arr[idx]);
        subarrayrec(v, arr, n, idx + 1);
    }
    else if (v[v.size() - 1] == arr[idx - 1])
    {
        v.push_back(arr[idx]);
        subarrayrec(v, arr, n, idx + 1);
    }
}

vector<int> subarrayxor(vector<int> v, int arr[], int n, int idx)
{
    vector<int> final;
    int a = 0;
    int ans = 0;

    if (idx == n)
    {
        // for(int i = 0; i< v.size(); i++){
        //     a = (a ^ arr[i]);
        // }
        // final.push_back(a);
        // cout << endl;
        // for(int i = 0; i<final.size(); i++){
        //     ans += final[i];
        // }
        // return ans;
        return v;
    }
    subarrayxor(v, arr, n, idx + 1);
    if (v.size() == 0)
    {
        v.push_back(arr[idx]);
        subarrayxor(v, arr, n, idx + 1);
    }
    else if (v[v.size() - 1] == arr[idx - 1])
    {
        v.push_back(arr[idx]);
        subarrayxor(v, arr, n, idx + 1);
    }
}

int ans(vector<int> a)
{
    int n = a.size();
    vector<int> anw;
    int b = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        b = (b ^ a[i]);
    }
    anw.push_back(b);
    for (int i = 0; i < anw.size(); i++)
    {
        ans += anw[i];
    }
    return ans;
}

int main()
{

    int arr[] = {1,3}; // 1 12 123 1234 2 23 234 3 34 4 -> sub array
    int size = sizeof(arr) / sizeof(arr[0]);

    // subarray(arr, size);
    cout << "------------------------------------" << endl;
    vector<int> v;
    subarrayrec(v, arr, size, 0);
    cout << " ----------------------" << endl;
    // vector<int> a = subarrayxor(v, arr, size, 0);
    // int b = ans(a);
    // cout << b;

    cout << endl;
    return 0;
}