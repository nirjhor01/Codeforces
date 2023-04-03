#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>par, sz;
void make_sets(int u){
	par[u] = u;
	sz[u] = 1;
}
int find_sets(int u){
	if(par[u] == u) return u;
	return par[u] = find_sets(par[u]);
}
void union_sets(int u, int v){
	u = find_sets(u);
	v = find_sets(v);
	if(u!=v){
		if(u < v) swap(u, v);
		sz[u] += sz[v];
		par[v] = u;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		
	int n, k; 
	cin >> n >> k;
	
	string s, t;
    cin >> s >> t;
    
	for(int i = 0; i < n; i++){
		make_sets(i);
	}
	for(int i = 0; i < n; i++){
		if(i + k < n) union_sets(i, i + k);
		if(i + k + 1 < n) union_sets(i, i + k + 1);
	}
	std::vector<vector<int>> v(n + 1);
	set<int>st;
	for(int i = 0; i < n; ++i){
		int p = find_sets(i);
		v[p].push_back(i);
		st.insert(p);
	}
	bool ok = 0;
	for(auto &i: st){
		string F = "", S = "";
		for(auto it: v[i]){
			F += s[it];
			S += t[it];
		}
		sort(F.begin(),F.end());
		sort(S.begin(),S.end());
		if(F != S){
			ok = 1;
			break;
		}
	}
	ok == 1?cout << "NO\n": cout << "YES\n";
}
	
	
}
