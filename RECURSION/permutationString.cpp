#include <iostream>
#include <vector>
#include <string>

using namespace std;

void permutation(string ans, string original){
    if(original == ""){
        cout << ans << endl;
        return;
    }
    for(int i = 0; i<original.length(); i++){
        char ch = original[i];
        string left = original.substr(0, i);
        string right = original.substr(i+1);
        permutation(ans+ch, left+right);
    }

}
int main()
{

    string str = "123";
    permutation("", str);



    cout << endl;
    return 0;
}