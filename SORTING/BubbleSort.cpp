#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {2,3,6,1,5};
    int n = 5;

    for(int i = 0; i<n-1; i++){
        int flag = 0;
        for(int j = 0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = 1;
            }
            
            }
            if(flag == 0){
                break;
        }
    }

    cout << endl;
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }

     






    cout << endl;
    return 0;
}