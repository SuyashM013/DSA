#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void change(vector<int>& a){
    a[0] = 1000;
} 

int main()
{
     vector<int> v2;
 
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(1);
    v2.push_back(12);
    v2.push_back(22);
    v2.push_back(26);
    v2.push_back(72);
    v2.push_back(9);
    v2.push_back(91);

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2.at(i) << " ";
    }
    cout << endl;
    change(v2);

      for (int i = 0; i < v2.size(); i++)
    {
        cout << v2.at(i) << " ";
    }
    cout << endl;


     

    return 0;
}