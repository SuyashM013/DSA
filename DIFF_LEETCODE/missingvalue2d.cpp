#include <iostream>
#include <vector>

using namespace std;
int main()
{

    vector<vector<int>> grid = { { 9, 1, 7 }, { 8, 9, 2 }, { 3, 4, 6 } };

    cout << grid.size();
    cout << grid[0].size();

      cout << endl;
    return 0;
}