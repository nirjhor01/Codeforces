#include <bits/stdc++.h>
using namespace std;

const int maxN = 3e5 + 7;
int n, k;

void solve() {
    string str; cin >> str;
    int ans = 0;
    int cnt_2s = 0, cnt_3s = 0;
    for(int i = 0; i < sz(str); i++){
        ans += (str[i] - '0');
        if(str[i] == '2') cnt_2s++;
        if(str[i] == '3') cnt_3s++;
    }
    for(int i = ans; i <= ans+20; i++){
        if(i % 3 == 0){
                int tmp = i / 3;
                if(tmp % 3 == 0){
                    int dif  = i - ans;
                    if(dif >= 6){
                        int div6 = dif / 6;
                        div6 = min(div6, cnt_3s);
                        dif -= (div6 * 6);
                        int div2 = dif / 2;
                        if(div2 <= cnt_2s && dif % 2 == 0){
                            cout << "YES\n";
                            return;
                        }
                    }
                    else{
                        int div2 = dif / 2;
                        if(div2 <= cnt_2s&& dif % 2 == 0){
                            cout << "YES\n";
                            return;
                        }
                    }
                }
        }
    }

    cout << "NO\n";



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








