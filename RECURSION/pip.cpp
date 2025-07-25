#include <iostream>
using namespace std;

void pip(int a)
{
    if (a == 0)
        return;

    cout << "Pre " << a << endl;
    pip(a - 1);
    cout << "In " << a << endl;
    pip(a - 1);
    cout << "Post " << a << endl;
}

int main()
{
cout << endl;
    pip(2);
    cout << endl;
    return 0;
}