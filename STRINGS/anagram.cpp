// just like permutatioons 2 string given hongi and hme find krna ki 1 string se wo dusri string ban rah kya after rearangement of words agar hn to wo anagram he 
// LEETCODE -242 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{

string s = "suyashmishra";
string v = "arhsimhsayus";

sort(s.begin(), s.end());
sort(v.begin(), v.end());

if(s == v) cout << "Anagram hai";
else cout << "Nahi hai";



    cout << endl;
    return 0;
}