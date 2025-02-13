#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int minimum_moves(const vector<string>& moves) {
    vector<string> dir = {"up", "down", "left", "right"};
    int s = moves.size();

    vector<vector<vector<int>>> dp(s + 1, vector<vector<int>>(4, vector<int>(4, INT_MAX)));

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            dp[0][i][j] = 0;
        }
    }

    for (int k = 1; k <= s; ++k) {
        int move_idx = find(dir.begin(), dir.end(), moves[k - 1]) - dir.begin();
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                if (dp[k - 1][i][j] != INT_MAX) {
                    if (move_idx == i || move_idx == j) {
                        dp[k][i][j] = min(dp[k][i][j], dp[k - 1][i][j]);
                    } else {
                        dp[k][i][j] = min({dp[k][i][j], dp[k - 1][move_idx][j] + 1, dp[k - 1][i][move_idx] + 1});
                    }
                }
            }
        }
    }

    int count = INT_MAX;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            count = min(count, dp[s][i][j]);
        }
    }

    return count;
}

int main() {
    int m;
    cin >> m;
    vector<string> move(m);
    for (int i = 0; i < m; ++i) {
        cin >> move[i];
    }

    int res = minimum_moves(move);
    cout << res;
    return 0;
}