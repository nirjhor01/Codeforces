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
int maxN = 33001;
std::vector<bool> mark(maxN + 1, 1);
std::vector<int> primes;
void sv(){
    for(int i = 2; i <= maxN; ++i){
        if(mark[i]){
            primes.push_back(i);
            for (int k = i*i; k <= maxN; k += i){
                mark[k] = 0;
            }
            

        }
    }
    
}
void solve() {
	int n;
	cin >> n;
	int nn = n;
	int bad = 0;
	int x = 2;
	
	while(true){
	nn = n;
	std::map<int, int> mp;
	bool ok = 0;
	for(int i = 0; primes[i] * primes[i] <= n; ++i){
		if (n % primes[i] == 0) {
			ok = 1;
            while (n % primes[i] == 0) {
             mp[primes[i]]++;
            n /= primes[i];
         }
     }
    
	}
	
	
	 if (n > 1) mp[n]++;
	 n = 1;
	 
	 int f_mul = 1;
	 for(auto i: mp) f_mul *= i.first;
	 
	
	 int f = 0;
	 n = nn;
	 while(n % f_mul == 0){
	 	n/=f_mul;
	 	f++;
	 }
	
	bad += f_mul * f;
	 
	 if(n == 1) break;
	 
	}
	 
    cout << bad << '\n';


}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    sv();
    cin >> T;
    for(int cs = 1; cs <= T; cs++) {
        solve();
    }
    return 0;

}



