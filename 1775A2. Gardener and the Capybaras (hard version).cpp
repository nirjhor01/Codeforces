#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf (1LL<<61)
#define len(s) (int)s.size()
#define all(a) a.begin(), a.end()
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr <<*it << " = " << a << ",   " << endl;
    err(++it, args...);
}
void solve() {
    string s;
    cin >> s;
    int n = len(s);
    string mid = "";
    if(s[0] ==  s[n - 1]) {
        for(int i = 1; i < len(s) - 1; ++i) mid += s[i];
        cout << s[0] << ' ' << mid << ' ' << s[n - 1] << '\n';
        return;
    }
    if(s[0] == 'a' and s[n - 1] == 'b') {
        if(s[1] == 'b') {
            for(int i = 1; i < len(s) - 1; ++i) mid += s[i];
            cout << s[0] << ' ' << mid << ' ' << s[n - 1] << '\n';
            return;
        }
        if(s[1] == 'a') {
            for(int i = 2; i < len(s); ++i) mid += s[i];
            cout << s[0] << ' ' << "a" << ' ' << mid << '\n';
            return;
        }
    }

    if(s[0] == 'b' and s[n - 1] == 'a') {
        if(s[1] == 'b') {
            for(int i = 1; i < len(s) - 1; ++i) mid += s[i];
            cout << s[0] << ' ' << mid << ' ' << s[n - 1] << '\n';
            return;

        }
        if(s[1] == 'a') {
            for(int i = 2; i < len(s); ++i) mid += s[i];
            cout << s[0] << ' ' << "a" << ' ' << mid << '\n';
            return;
        }

    }


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


 
