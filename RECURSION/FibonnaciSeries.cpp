#include <iostream>
using namespace std;

// 0 + 1 + 1 + 2 + 3 + 5 + 8 + 13......

int fabonica(int a){
    if(a == 0){
        return 0;
    }
    if(a == 1){
        return 1;
    }
    return fabonica(a-1) + fabonica(a-2);

}

int main()
{

int a = fabonica(4);
cout << a;

    cout << endl;
    return 0;
}