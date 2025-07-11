#include <iostream>
#include <stack>
// 1 day se pichle kitne din wo prices sabse high tha
//  inp - 100 80 60 70 60 75 85
// o/p -    1  1  1  2   1  4  5
using namespace std;

int main()
{

    int arr[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(arr) / sizeof(arr[0]);

    int nge[n];

    stack<int> st; // pop, ans, push
    nge[0] = 1;
    st.push(0);

    for (int i = 1; i < n; i++)
    {
        while (st.size() > 0 && arr[st.top()] <= arr[i])
        {
            st.pop();
        }
        if (st.size() == 0)
        {
            nge[i] = -1;
        }
        else
        {
            nge[i] = st.top();
            nge[i] = i - nge[i];
        }

        st.push(i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << nge[i] << " ";
    }

    cout << endl;
    return 0;
}