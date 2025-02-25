//  Time Complexity - O(nLogn)

#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int>& left, vector<int>& right, vector<int>& ans){

    int i = 0;
    int j = 0;
    int k = 0;

    while(i < left.size() && j<right.size()){
        if(left[i] > right[j]){
            ans[k] = right[j];
            j++;
            k++;
        }
        else{
            ans[k] = left[i];
            k++;
            i++;
        }
    }

    while(i <= left.size()-1){
        ans[k] = left[i];
            k++;
            i++;
    }
    while(j <= right.size()-1){
        ans[k] = right[j];
            j++;
            k++;
    }

    return ans;

}

void mergesort(vector<int>& a){
    int n = a.size();
    if(n == 1) return;

    int n1 = n/2;
    int n2 = n - n/2;


    vector<int> v1(n1), v2(n2);

    for(int i=0; i<n1; i++){
        v1[i] = a[i];
    }
    for(int i=0; i<n2; i++){
        v2[i] = a[i+n1];
    }

    mergesort(v1);
    mergesort(v2);

    merge(v1, v2, a);
}

int main()
{


    // vector<int> v1 = {1, 3, 5, 7};
    // vector<int> v2 = {2, 4, 6, 8, 9, 10};
    // vector<int> ans(v1.size()+v2.size());
    // merge(v1, v2, ans);

    vector<int> v2 = {2, 0, 3, 8, 4, 10};
    mergesort(v2);


    for(int i = 0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }

    cout << endl;
    return 0;
}
