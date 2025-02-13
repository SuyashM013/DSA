#include <iostream>
#include <string>
using namespace std;

void remove(string ans, string original){
    if(original.length()==0){
        cout << ans;
        return;
    }

    char ch = original[0];
    if(ch == 'a') remove(ans, original.substr(1));
    else remove(ans + ch, original.substr(1));
}

int main()
{

string str = "Sauayash Mishra";
string s = "";

remove("", str);

//without recursion
for(int i = 0; i<str.length(); i++){
    if(str[i] != 'a') s.push_back(str[i]);
}
// cout << s; 

    cout << endl;
    return 0;
}