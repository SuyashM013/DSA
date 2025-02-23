// leetcode- 2729

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void number(int n)
{
    int a = 2 * n;
    int b = 3 * n;

    string alen = to_string(a);
    string blen = to_string(b);
    string nlen = to_string(n);

    string res = alen + blen + nlen;
    string exp = "123456789";

    sort(res.begin(), res.end());

    for (int i = 0; i <= res.length(); i++)
    {
        if (res[0] == '0')
        {
            cout << "Invalid tis";
            break;
        }
        // if(res[i] != i+1){
        //     return false;
        //     break;
        // }
        // else return true;

        if (res[i] == exp[i] )
        {
            cout << res[i] << " ";
        }
        else
        {
            cout << "Invalid";
            break;
        }
    }
    // return {};
}

int main()
{
    int a = 193;
    number(a);
    cout << endl;
    return 0;
}