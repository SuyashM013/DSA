#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s;
    cout << "Enter the String withot Space only ALPHABETS : ";
    cin >> s;
    cout << endl;

int count = 0;


for(int i=0; i<s.length(); i++){
    if(s.length() == 1){
        break;
    }
    if(i==0){
        if(s[i] != s[i+1]) count++;
    }
    else if(i==s.length()-1){
        if(s[i] != s[i-1]) count++;
    }
    else if(s[i] != s[i-1] && s[i] != s[i+1] ){
        count++;
    }
    
}

cout << "Count: " << count;


    cout << endl;
    return 0;
}