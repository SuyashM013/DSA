#include <iostream>
using namespace std;


int main()
{

    int n = 21;

    while (n > 0) {
        if (n % 3 == 2) {
            return false;
        }
        n /= 3;
        return true;
    }
    return true;
    return 0;
}