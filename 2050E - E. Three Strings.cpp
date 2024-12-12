#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int recur(const string &a, const string &b, const string &c, int i, int j, vector<vector<int>> &dp) {
    if (i == a.size() && j == b.size()) {
        return 0;
    }

    if (dp[i][j] != -1) {
        return dp[i][j];
    }

    int mismatch = INF;

    if (i < a.size() && a[i] == c[i + j]) {
        mismatch = min(mismatch, recur(a, b, c, i + 1, j, dp));
    } else if (i < a.size()) {
        mismatch = min(mismatch, 1 + recur(a, b, c, i + 1, j, dp));
    }

    if (j < b.size() && b[j] == c[i + j]) {
        mismatch = min(mismatch, recur(a, b, c, i, j + 1, dp));
    } else if (j < b.size()) {
        mismatch = min(mismatch, 1 + recur(a, b, c, i, j + 1, dp));
    }

    return dp[i][j] = mismatch;
}

void solve() {
    string a, b, c;
    cin >> a >> b >> c;

    int n = a.size(), m = b.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    cout << recur(a, b, c, 0, 0, dp) << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
