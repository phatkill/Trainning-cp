/**
problem:https://codeforces.com/problemset/problem/1808/B
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/16, Time: 17:54:51
create by: Phat Of Bug
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
    int n, m; cin >> n >> m;
    vector<vector<ll>> grid(m + 1, vector<ll>(n + 1));
    rep(i, 1, n, 1){
        rep(j, 1, m, 1) cin >> grid[j][i];
    }
    ll ans = 0;
    rep(j, 1, m, 1){
        sort(all(grid[j]));
        rep(i, 1, n, 1) ans += grid[j][i] * (i * 2 - n - 1);
    }
    cout << ans << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}