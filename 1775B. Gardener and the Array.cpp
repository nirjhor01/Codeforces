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
	int n;
	cin >> n;
	int num;
	int setBit;
	std::vector<int> v[n];
	std::map<int, int> mp;
	for(int i = 0; i < n; ++i){
		cin >> num;
		while(num--){
			cin >> setBit;
			v[i].push_back(setBit);
			mp[setBit]++;
			
		}
	}
	bool work = 1;
	
	for(int i = 0; i < n; ++i){
		work = 1;
		for(int j = 0; j < v[i].size(); ++j){
			if(mp[v[i][j]] < 2) work &= 0;
		}
		if(work){
			cout << "Yes\n";
			return;
		}
	}
	cout << "No\n";
	


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
 
