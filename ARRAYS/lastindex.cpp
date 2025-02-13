#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v2;

    v2.push_back(3);
    v2.push_back(1);
    v2.push_back(12);
    v2.push_back(22);
    v2.push_back(26);
    v2.push_back(3);
    v2.push_back(9);
    v2.push_back(91);

    int last = -1;

    int find = 3;
    for (int i = v2.size() - 1; i>=0; i--)
    {
        if (v2[i] == find)
        {
            last = i+1;
            break;
        }
    }
    cout << last;

    cout << endl;
    return 0;
}