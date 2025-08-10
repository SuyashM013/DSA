#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(5);


    // insert, search, del - long(N)

    for(int ele : s){
        cout << ele<< " ";
    }
        cout << endl;
    return 0;
}