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
    vector<int> v1;
    vector<int> v2;
   

    int size;
    cout << "Enter array size: ";
    cin >> size;

    cout << "Enter Array Elements: ";
    int j =-1;
    for (int i = 0; i < size; i++)
    {
        int q;
        cin >> q;
        v1.push_back(q);
     
    }
    for(int i=v1.size()-1; i>=0; --i){
        v2.push_back(i+1);
    }

   display(v1);
   cout<<endl;
   display(v2);

}