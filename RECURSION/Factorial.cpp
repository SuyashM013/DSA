#include <iostream>
using namespace std;

int fact(int a){
    //Base Case
    if(a == 0 || a == 1){
        return 1;
    }
    //Recursive case
    return  a * fact(a-1);
}

int main()
{

int a = fact(2);
cout << a;



    cout << endl;
    return 0;
}