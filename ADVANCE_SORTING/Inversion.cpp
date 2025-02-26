// a[0] > a[1] but
// 0 < 1(value at index 0 and index 1)

#include <iostream>
#include <vector>
using namespace std;

// Brute force - O(n^2); O(1)
void brute_inversion(vector<int> &a)
{

    int n = a.size() - 1;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                count++;
                cout << "(" << a[i] << "," << a[j] << ")" << endl;
            }
        }
    }
    cout << count;
}

// int countkaro = 0; // Global variable


// To remove global variable we can use a variable inside merge function and then return the count var.
// Optimized - O(nlogn); O(n) -> Merge sort se krte hai
vector<int> mergesort(vector<int> &left, vector<int> &right, vector<int> &ans)
{

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < left.size() && j < right.size())
    {
        if (left[i] >= right[j])
        {
            ans[k] = right[j];
            j++;
            k++;
        }
        else
        {
            ans[k] = left[i];
            k++;
            i++;
        }
    }

    while (i <= left.size() - 1)
    {
        ans[k] = left[i];
        k++;
        i++;
    }
    while (j <= right.size() - 1)
    {
        ans[k] = right[j];
        j++;
        k++;
    }

    return ans;
}
int inversion(vector<int> &left, vector<int> &right){
    int count = 0;
    int i =0;
    int j =0;

    while(i<left.size() && j<right.size()){
        if(left[i] > right[j]){
            count += left.size() - i;
            j++;
        }
        else{
            i++;
        }
    }
    return count;
}

int merge(vector<int> &a)
{
    int count = 0;
    int n = a.size();
    if (n == 1)
        return 0;

    int n1 = n / 2;
    int n2 = n - n / 2;

    vector<int> left(n1), right(n2);

    for (int i = 0; i < n1; i++)
    {
        left[i] = a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = a[i + n1];
    }
    count += merge(left);
    count += merge(right);

    // countkaro += inversion(left, right);
    count += inversion(left, right);

    mergesort(left, right, a);
    left.clear();
    right.clear();
    return count;
}

int main()
{
    vector<int> v2 = {5, 1, 8, 2, 3};
    cout << "Brute Force se kia hai";
    brute_inversion(v2);
    cout << endl << endl;
    cout << "Merge sort se kia hai: ";
    // merge(v2);
    cout << merge(v2);
    // cout << countkaro;
    


    cout << endl;
    return 0;
}