#include <iostream>

using namespace std;

// a ki power b a^b

int power(int a, int b ){
    if(b==0) return 1;
    if(b == 1) return a;

    int ans = power(a,b/2);
    if(b%2 == 0) return ans * ans;
    else return a * ans * ans; 

}

int main()
{

int a = power(2,5);
cout << a;

    cout << endl;
    return 0;
}