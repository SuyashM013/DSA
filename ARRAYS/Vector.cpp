#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void vec()
{

    vector<string> v1;

    v1.push_back("javaTpoint ");
    v1.push_back("tutorial");
    v1.push_back("Vectors");
    v1.push_back("Padh rahe he");

    for (int i = 0; i < v1.size(); i++)
    {
        cout << "elements inside the vector v1 are: " << v1.at(i);
        cout << endl;
    }
}

int main()
{
    vec();
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

    //  cout << v2.capacity();

    cout << "BEfore Sorting -> " << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2.at(i) << " ";
    }
    cout << endl;

    cout << "After Sorting -> " << endl;
    sort(v2.begin(), v2.end());

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2.at(i) << " ";
    }

    return 0;
}