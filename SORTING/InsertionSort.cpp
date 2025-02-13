

#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {2, -3, 6, 0, 5};
    int n = 5;
      cout << endl;
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }

// Main Code 
    for(int i = 1; i<n; i++){
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
      cout << endl;
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }

    

    cout << endl;
    return 0;
}