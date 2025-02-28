#include <iostream>
#include <vector> 
#include <algorithm>     
using namespace std;

int partition(int arr[], int si, int ei){
    int pivot = arr[si];
    int count = 0;

    for(int i = si+1; i<=ei; i++){
        if(arr[i] <= pivot) count ++;
    }

    int pivotindex = si + count;
    swap(arr[pivotindex],arr[si]);

    int i = si;
    int j = ei;

    while(i < pivotindex && j > pivotindex){

        if(arr[i] <= pivotindex) i++;
        if(arr[j] > pivotindex) j--;
        else if(arr[i] > pivotindex && arr[j] <= pivotindex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

    }
return pivotindex;

}

void quicksort(int arr[], int si, int ei){

    if(si >= ei) return; // base call

    int pi = partition(arr, si, ei);

    quicksort(arr, si, pi-1);
    quicksort(arr, pi+1, ei);
}

int main()
{
    int arr[] = {1, 3, 2, 5, -4, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n);

    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}