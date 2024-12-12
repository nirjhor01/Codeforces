#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Solve() {
    ll n;
    cin >> n;
    map<ll, ll> mp;
    ll x;
    mp[0] = 1;
    ll sum = 0;
    ll ans = 0;
    ll prev = -1;
    map<ll, ll> cur;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
        mp[sum]++;
        if (mp[sum] != 1) {
            if (prev == -1) {
                prev = i;
                ans++;
            } else {
                ll new_cur = cur[sum];
                if (prev <= new_cur) {
                    ans++;
                    prev = i;
                }
            }
        }
        cur[sum] = i;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        Solve();
    }
    return 0;
}
