
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int findMagicValue(string a)
{
    // Write your code here

    int n = a.size();
    int ans = 0;
    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int a = a[j];
            int b = stoi(a[j] - '0');

            temp += (a - b);
            ans = max(ans, temp);
        }
    }

    return ans;
}

int main()
{
    cout << endl;

    string a = "96";

    int as = findMagicValue(a);
    cout << as;

    return 0;
}