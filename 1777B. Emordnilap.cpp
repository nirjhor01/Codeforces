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
const int N = 1e9 + 7;
void solve() {
	int n;
	cin >> n;
	n--;
	int ans = (n * (n + 1) / 2) % N;
	ans  =  (ans * 2LL) % N;
	int mul = 1;
	
	auto func = [&](int u){
		for(int i = 1; i <= u; i++){
			mul  = (mul % N * i % N) % N;
		}
		return mul % N;
		
	};
	
	cout << ((func(n + 1) % N) * ans) % N << '\n';

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
 
