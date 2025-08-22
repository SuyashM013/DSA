#include <iostream>
#include <string>
#include <map>
using namespace std;

map<char, string> mp;

void decode(string a)
{
    int n = a.size();
    string ans = "";

    mp['a'] = "1";
    mp['e'] = "5";
    mp['i'] = "9";
    mp['o'] = "15";
    mp['u'] = "21";

    for(int i = 0; i<n ; i++){
        char temp = a[i];
        if(mp.find(temp) != mp.end()){
            ans += mp[temp];
        }
        else{
            ans+=a[i];
        }
    }

    cout << ans;


}

int main()
{
    string a;
    cin >> a;
    decode(a);
    cout << endl;
    return 0;
}