#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]= {10, 20, -1, -4, 6, 18, 105, 118};
    int k = 5;
    int n = sizeof(arr)/4;

    priority_queue<int> pq;

    for(int i = 0; i<n; i++){
        pq.push(arr[i]);
        if(pq.size() > k) pq.pop();
    }
    cout << pq.top();


    cout << endl;
    return 0;
}