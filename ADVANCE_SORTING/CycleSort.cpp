#include <iostream>
#include <vector>
using namespace std;

vector<int> cyclesort(vector<int>& arr){
    int n = arr.size();
    int i =0;
    
    while(i<n){
        int corridx = arr[i]-1;
        
        if(i == corridx ) i++;
        else swap(arr[i], arr[corridx]);
        
    }
}
int main()
{

    vector<int> v2 = {5,4,1,2,3,8,6,7};
    cyclesort(v2);

    for(int i = 0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << endl;
    return 0;
}