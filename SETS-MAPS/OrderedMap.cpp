#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> m;
    m[1] = 10;
    m[3] = 30;
    m[2] = 20;

    for(auto x: m){
        cout << x.first<< " ";
    }
    cout << endl;
    return 0;
}