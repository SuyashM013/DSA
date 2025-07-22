#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void display(queue<int> &q)
{

    int n = q.size();

    for ( int i = 1; i <= n; i++ )
    {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}
 

int main()
{

    vector<int> a = {0, -1, -2, 3, 4, -5, 6, 4, 7, -8};

    vector<int> ans;
    queue<int> q;
    int n = a.size();
    int k = 3;

    for(int i = 0; i<n; i++){
        if(a[i] <0) q.push(i);
    }

    int i = 0;
    while(i <= n-k){
        while(q.size() > 0 && q.front() < i) q.pop();

        if(q.size()==0 || q.front() >= i+k) ans.push_back(0);

        else ans.push_back(a[q.front()]);
        i++;
    }

    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout <<endl;
    

    cout << endl;
    return 0;
}