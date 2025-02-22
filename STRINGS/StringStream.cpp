#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;
int main()
{

    string str = " ";
    // str = str[-1];
    stringstream ss(str);   //Removes spaces between strings
    string temp;
    vector<string> last; 
    
    while (ss >> temp)
    {
        last.push_back(temp);
       
    }
    reverse(last.begin(), last.end()); // Reverse a word
for(int i = 0; i<last.size(); i++){
    cout << last[i] << " ";
}

   

    cout << endl;
    return 0;
}