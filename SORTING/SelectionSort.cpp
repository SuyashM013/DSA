#include <iostream>
using namespace std;
int main()
{
   int arr[5] = {2,3,6,10,5};
    int n = 5;

    cout << endl;
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }


    for(int i = 0; i<n-1; i++){
        int min = i;
        for(int j =i; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            swap(arr[i], arr[min]);
        }
    }

    cout << endl;
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }











    cout << endl;
    return 0;
}