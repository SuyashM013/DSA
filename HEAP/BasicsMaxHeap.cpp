#include <bits/stdc++.h>
using namespace std;
int main()
{

    priority_queue<int> pq;
    pq.push(10);
    pq.push(2);
    pq.push(-3);
    pq.push(9);

    cout << pq.top() << endl;

    pq.pop();
    

    cout << pq.top();



    cout << endl;
    return 0;
}