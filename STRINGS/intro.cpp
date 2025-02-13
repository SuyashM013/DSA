#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{

    char str[5] = {'a', 'b', 'c', 'd', 'e'};
    // cout << str; = abcde

    for (int i = 0; i < 5; i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;

    string name;
    cout << "Enter name: ";
    // getline(cin, name);
    cout << "Name: " << name << endl;

    // cout << "Reversing the name: ";
    // for(int i = name.length()-1; i>=0; i-- ){
    //     cout << name[i] << endl;
    // }
    // cout << endl;
    // cout << name;
    cout << endl;

    // string n = "Vaishu";

    // cout << "Reversing the name using built in fx: ";
    // reverse(n.begin(), n.end());
    // cout << n;

    cout << name << endl
         << endl;

    string a = "suyashmishra";

    sort(a.begin(), a.end());
    cout << a;

    cout << endl
         << endl;

    string s = "Suyash Is a Good      Boiiyu     ";
    cout << s << endl;
    cout << " -----------" << endl
         << endl;
    int count = 0;
    int flag = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        // cout << s[i]  << endl;
        if (s[i] != ' ')
        {
            count++;
            flag = 1;
        }
        else if (flag == 1)
        {
            break;
        }
    }
    cout << count;

    cout << endl
         << endl;

    int n = 2;
    int x = n/2;
    //  cout << n /2;
    for (int i = 0; i <= x; i++)
    {
        cout << n << " ";
        if(n == 1){
            break;
        }
        n /= 2;

         if (n == 0)
        {
            cout << "power";
            break;
        }
       
    }

    return 0;
}