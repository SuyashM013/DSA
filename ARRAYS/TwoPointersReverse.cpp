#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>& a){
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;
}

int main()
{
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

int start = 0;
int end = v.size()-1;
while(end >= start){
    int temp = v[start];
    v[start] = v[end];
    v[end] = temp;
    start++;
    end--;
}
cout << "After Reversing Order: " << endl; 
display(v);



}