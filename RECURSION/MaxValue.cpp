#include <iostream>
using namespace std;

void PrintSum(int arr[], int n, int idx, int max){
    if(idx == n) {
        cout << max;
        return;
    }
    if(max < arr[idx]) max = arr[idx];
    PrintSum(arr, n, idx+1, max);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 23, 7, 8, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    PrintSum(arr, n, 0, 0);

    cout << endl;
    return 0;
}
