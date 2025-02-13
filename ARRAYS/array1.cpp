#include <iostream> 
 using namespace std;

void display(int* arr, int n){
    for(int i=0; i<n; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
int arr1[] = {1,2,3,4,5};

// size of is_array
int size = sizeof(arr1)/sizeof(arr1[0]);
display(arr1, size);

// Ponters
int arr2[5] = {5,6,7,8,9};
int* ptr = &arr2[0];
cout << ptr << endl; //address of n index of array   
cout << *ptr << endl; 

for(int i = 0; i<5; i++){
    cout << ptr[i] <<" " ;

}

  cout<< endl;
    return 0;
}