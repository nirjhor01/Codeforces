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
    int n, k;
    cin >> k >> n;
    std::vector<int> ans;
    for(int i = 1; i <= n; ++i){
        ans.clear();
        //ans.push_back(i);
        int c = 2;
        int take = i;
        int p = i;
        if(i == 1) c--;
        
        while(take + c <= n){
            if(len(ans) + i == k) break;
            if(take + c <= n){
                take += c;
                ans.push_back(take);
            } 
            c++;
        }
        if(len(ans) + i == k){
            for(int j = 1; j <= p; ++j) cout << j << ' ';
                for(auto ii: ans) cout << ii << ' ';
                    cout << '\n';
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
 
