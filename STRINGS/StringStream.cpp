#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;
int main()
{

    string str = "Suyash is    a btech Student";
    stringstream ss(str);   //Removes spaces between strings
    string temp;
    while (ss >> temp)
    {
        cout << temp << endl;
    }

   

    cout << endl;
    return 0;
}