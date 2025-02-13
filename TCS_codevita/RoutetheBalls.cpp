#include <bits/stdc++.h>
using namespace std;
using ll = long long;

unordered_map<string, vector<string>> graph;
unordered_map<string, ll> mask, id;
unordered_map<string, string> open;
ll ans = 0;

ll dfs1(const string &u) {
    ll curr = id.count(u) ? 1LL << id[u] : 0;
    for (const string &v : graph[u]) {
        curr |= dfs1(v);
    }
    return mask[u] = curr;
}


void dfs2(const string &u, ll bit) {
    if (id[u] == bit) {
        open[u] = u;
        return;
    }
    for (const string &v : graph[u]) {
        if ((mask[v] >> bit) & 1) {
            if (open[u] != v) {
                ans++;
                open[u] = v;
            }
            dfs2(v, bit);
            return;
        }
    }
}

int main() {
    ll N;
    cin >> N;
    cin.ignore();

    while (N--) {
        string line;
        getline(cin, line);
        istringstream iss(line);
        vector<string> children((istream_iterator<string>(iss)), istream_iterator<string>());
        reverse(children.begin(), children.end());
        string parent = children.back();
        children.pop_back();
        graph[parent] = move(children);
    }

    ll cid = 0;
    string line;
    getline(cin, line);
    istringstream iss(line);
    vector<string> colors((istream_iterator<string>(iss)), istream_iterator<string>());
    for (const string &color : colors) {
        if (!id.count(color)) {
            id[color] = ++cid;
        }
    }

    string u = "source";
    dfs1(u);

    for (const string &color : colors) {
        dfs2(u, id[color]);
    }

    cout << ans << '\n';

    return 0;
}