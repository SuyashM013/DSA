#include <iostream>
#include <vector>
using namespace std;

//doblet in array whose sum is equal to a given value x -> {1,2}, {2,3} .......
//Leetcode problem - 1
// v = {1,3,2,4,3,4,1,6} target = 7 

int main()
{
    int x;
    cout << "Enter Target : ";
    cin >> x;

    vector<int> v;
    int size; 
    cout << "Enter array size: ";
    cin >> size;

cout << "Enter Array Elements: ";
for(int i =0 ; i<size; i++){
int q;
cin >> q;
v.push_back(q);
}

for(int i =0; i<=v.size()-2; i++){
    for(int j = i+1; j<=v.size()-1; j++){
        if(v[i] + v[j] == x){
            cout << "( "<<i<<" , "<<j<<" )"<< endl;
        }
    }
}

    return 0;
}