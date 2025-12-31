/**
problem:https://codeforces.com/problemset/problem/580/C
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/27, Time: 17:18:57
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
const int N = 1e5;
vector<int> adj[N + 5];
int main() {
    faster
    int n, m; cin >> n >> m;
    vector<int> cat(n + 1);
    rep(i, 1, n, 1) {int x; cin >> x; cat[i] = x;}
    rep(i, 1, n - 1, 1){
        int u, v; cin >> u >> v; adj[u].pb(v); adj[v].pb(u);
    }
    ll ans = 0;
    function<void(int, int, int)> dfs =[&](int u, int par, int cnt){
        if (cat[u]) cnt++;
        else cnt = 0;
        if (cnt > m) return;
        int leaf = 1;
        for (auto v: adj[u]){
            if (v != par) dfs(v, u, cnt), leaf = 0;
        }
        ans += leaf;
    };
    dfs(1, 0, 0);
    cout << ans << '\n';
}