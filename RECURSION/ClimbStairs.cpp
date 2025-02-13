//LEETCODE - 70 but comes time limit error

#include <iostream>
using namespace std;

int climb(int n){
     if (n == 0 || n == 1) {
            return 1;
        }
        return climb(n-1) + climb(n-2);
}

int main()
{
    int a = climb(45);
    cout << a;
    
    cout << endl;
    return 0;
}