#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{

    unordered_map<string, int> m;
    pair<string, int> p1;

    p1.first = "Suyash";
    p1.second = 11;

    m.insert(p1);

    m["vai"] = 22;
    m["kuju"] = 33;
    

    for(auto p : m){
        cout << p.first<<" "<<p.second << endl;
    }

    m.erase("kuju") ;// key insert

    for(auto p : m){
        cout << p.first<<" "<<p.second << endl;
    }

    cout << m.size();



    cout << endl;
    return 0;
}