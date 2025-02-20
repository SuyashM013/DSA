// subarray matlab subsequence jo ki continous fashion me ho
// subset alag hote or sub array alag hote

#include <iostream>
#include <vector>
using namespace std;

// loops se
void subarray(int arr[], int len){
    for(int i = 0; i<len; i++){
        for(int k = i; k <len; k++ ){
            for(int j = i; j<=k; j++){
                cout << arr[j];
            }
            cout << endl;
        }                    
    }

}

//  Recursion se ab kare - 


void subarrayrec(vector<int> v,int arr[], int n, int idx ){
    if(idx == n){
        for(int i = 0; i< v.size(); i++){
            cout << v[i];
            
        }
        cout << endl;
        return;
    }
    subarrayrec(v, arr, n, idx+1);
    if(v.size() == 0){
        v.push_back(arr[idx]);
        subarrayrec(v, arr, n, idx+1);

    }
    else if(v[v.size()-1] == arr[idx-1] ){
        v.push_back(arr[idx]);
        subarrayrec(v, arr, n, idx+1);
    }
}


int main()
{

    int arr[] = {1,2,3}; //1 12 123 1234 2 23 234 3 34 4 -> sub array
    int size = sizeof(arr)/sizeof(arr[0]);
    
// subarray(arr, size);
cout << "------------------------------------"<< endl;
vector<int> v;
subarrayrec(v, arr, size ,0);

    cout << endl;
    return 0;
}