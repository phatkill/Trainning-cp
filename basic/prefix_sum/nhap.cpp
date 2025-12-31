/**
problem: D. A and B
Style: Phat Of Bug (CP)
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define pb push_back
#define rep(i, a, b, k) for (int i = a; i <= b; i += k)
#define per(i, a, b, k) for (int i = a; i >= b; i -= k)

void solve(){
    int n; cin >> n;
    string s; cin >> s; s = ' ' + s; // Base-1
    vector<int> posA, posB;
    
    rep(i, 1, n, 1) {
        if (s[i] == 'a') posA.pb(i);
        else posB.pb(i);
    }

    auto calc = [&](vector<int> &v) -> ll {
        if (v.empty()) return 0;
        vector<int> t;
        // Chuyen doi bai toan ve Median: val = pos[i] - i
        rep(i, 0, sz(v) - 1, 1) t.pb(v[i] - i);
        
        // Vi tri v tang dan -> t cung tang dan -> lay Median luon
        int mid = t[sz(t) / 2];
        ll cost = 0;
        for (int x : t) cost += abs(x - mid);
        return cost;
    };

    cout << min(calc(posA), calc(posB)) << '\n';
}

int main() {
    faster
    int t; cin >> t; 
    while(t--) solve();
}