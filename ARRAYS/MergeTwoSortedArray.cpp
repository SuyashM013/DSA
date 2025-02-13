// three pointers use hoga

#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;
}

vector<int> merge(vector<int>& arr1, vector<int>& arr2){
    int n = arr1.size();
    int m = arr2.size();

    vector<int> res(m+n );

    int i = 0;
    int j = 0;
    int k = 0;

    while(i <n && j <m){
        if(arr1[i] < arr2[j]){
            res[k] = arr1[i];
            i++;
            k++;
        }
        else{
            res[k] = arr2[j];
            j++;
            k++;
        }

    }

        while(j<=m-1){
            res[k] = arr2[j];
            j++;
            k++;
        }
    
    
        while(i<=n-1){
            res[k] = arr1[i];
            i++;
            k++;
        }
    

    return res;

}

int main()
{

    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    v1.push_back(1);
    // v1.push_back(3);
    // v1.push_back(5);
    // v1.push_back(7);
    // v1.push_back(9);

    cout << "Vector V1: ";
    display(v1);
    cout << endl;
   
    // v2.push_back(0);
    // v2.push_back(2);
    // v2.push_back(4);
    // v2.push_back(6);
    // v2.push_back(8);
    // v2.push_back(10);
    // v2.push_back(11);

    cout << "Vector V2: ";
    display(v2);
    cout << endl;

    vector<int> ans = merge(v1, v2);
    cout << "After Merge Two Sorted Array: ";
    display(ans);
   

    return 0;
}