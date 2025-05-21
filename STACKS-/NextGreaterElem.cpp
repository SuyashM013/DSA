#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int arr[] = {3, 1, 2, 7, 4, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int nge[n];

    stack<int> st;   // pop, ans, push
    nge[n - 1] = -1;
    st.push(arr[n-1]);

    for(int i = n-2; i>= 0; i--){
        while(!st.empty() && st.top() <= arr[i]){
            st.top();
        }
        if(!st.empty()){
            nge[i] = -1;
        }
        else{
            nge[i] = st.top();
        }

        st.push(arr[i]);
    }

    for(int i = 0; i<n; i++){
        cout << nge[i] << " ";
    }

    cout << "Eokr";

    cout << endl;
    return 0;
}