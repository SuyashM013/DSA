#include <iostream>
#include <vector>
#include <algorithm>
 using namespace std;

 vector<int> ans(vector<int>& nums1, vector<int>& nums2, vector<int>& ans){
    int i =0;
    int j =0;
    int k = 0;

    while(i < nums1.size() && j < nums2.size() ){
        if(nums1[i] >= nums2[j] ){
            ans[k] = nums2[j];
            j++;
            k++;
        }
        else{
            ans[k] = nums1[i];
            k++;
            i++;
        }
    }

    while(i <= nums1.size()-1){
        ans[k] = nums1[i];
        k++;
        i++;
    }
    while(j <= nums2.size()-1){
        ans[k] = nums2[j];
        k++;
        j++;
    }

    return ans;
   }


   double median(vector<int>& ans){
    int n = ans.size()-1;
    double answer = 0.00;

    if(n % 2 == 0){
        return answer = ans[n/2];
    }
    else{
        
        return answer = (ans[n/2] + ans[(n/2)+1])/2;
    }
   }


   int main(){

    vector<int> nums1 = {1,5,10,11};
     vector<int> nums2 = {3,4,6,7,8,9};
     int n = nums1.size() + nums2.size();
     vector<int> ans1(n);

     ans(nums1, nums2, ans1);
      for(int i = 0; i < n; i++){
        cout << ans1[i] << " ";
      }

      cout << endl << endl;
      double a = median(ans1);
      cout << a;


  cout<< endl;
    return 0;
}