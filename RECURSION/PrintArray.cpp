#include <iostream>
using namespace std;

// print aray using recursion 

void display(int arr[], int n, int idx){
    if(idx == n) return;
    cout << arr[idx] << " ";
    display(arr, n , idx+1);
}
//vector ke lie n ni bhejna hota he bss 2 arguments dene hote


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr, n, 0);
    cout << endl;
    return 0;
}