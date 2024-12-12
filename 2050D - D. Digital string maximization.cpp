#include <bits/stdc++.h>
using namespace std;

const int maxN = 3e5 + 7;
int n, k;

void solve() {
    string str; cin >> str;
    auto send = [&](int p, string &str){
        while(p > 0 && (str[p]-'0') - 1 > (str[p - 1] - '0')){
            str[p]--;
            swap(str[p], str[p - 1]);
            p--;
        }
    };
    for(int i = 1; i < (int)str.size(); i++){
        send(i, str);
    }
    cout << str << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    for(int cs = 1; cs <= T; cs++) {
        solve();
    }
    return 0;
}









