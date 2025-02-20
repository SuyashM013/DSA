// Leetcode - 39

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
using namespace std;

void combination(vector<int> v, int arr[], int n, int target, int idx){
    if(target ==0){
        sort(v.begin(), v.end());
        for(int i = 0; i< v.size(); i++){
            cout << v[i] << " ";
            }
            cout << endl;
            return;
    }
   if(target < 0) return;

   for(int i =idx; i<n; i++){
      v.push_back(arr[i]);
      combination(v, arr, n, target-arr[i], i);
      v.pop_back();
   }

}

int main()
{
    int arr[] = {2,3,5};
    vector<int> v;

    combination(v, arr, 3, 8, 0);


    cout << endl;
    return 0;
}
