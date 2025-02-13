#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> v2;

    v2.push_back(1);
    v2.push_back(1);
    v2.push_back(0);
    v2.push_back(1);
    v2.push_back(0);
    v2.push_back(1);
    v2.push_back(1);
    v2.push_back(0);
    // v2.push_back(1);

    // First MEthod TIme complexity - 2N
    int noZero = 0;
    int noOne = 0;

    for (int i = 0; i < v2.size(); i++)
    {
        if (v2.at(i) == 0)
        {
            noZero++;
        }
        else
        {
            noOne++;
        }
    }

    for (int i = 0; i < v2.size(); i++)
    {
        if (i < noZero)
        {
            v2[i] = 0;
        }
        else
        {
            v2[i] = 1;
        }
    }

    // 2nd method - 2 pointers

    int start = 0;
    int end = v2.size() - 1;

    while (start <= end)
    {
        if (v2[start] == 0)
        {
            start++;
        }
        else if(v2[end] == 1){
            end--; 
        }
        
        else if(v2[start] == 1 && v2[end] ==0){
            v2[start] = 0;
            v2[end] = 1;

            start++;
            end--;
        }
          
    }

    cout << noZero << " " << noOne << endl; 

    display(v2);

    cout << endl;
    return 0;
}