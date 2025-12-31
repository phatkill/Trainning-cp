/**
problem:https://cses.fi/problemset/task/1666
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/27, Time: 15:57:41
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
vector<ll> adj[N + 5];
int main() {
    faster
    int n, m; cin >> n >> m;
    vector<ll> vs(n + 1);
    rep(i, 1, m, 1){
        int u, v; cin >> u >> v;
        adj[u].pb(v); adj[v].pb(u);
    }
    vector<int> lead(1);
    function<void(int)> dfs =[&](int u){
        vs[u] = 1;
        for (auto v: adj[u]) if (!vs[v]) dfs(v);
    };
    rep(i, 1, n, 1) if (!vs[i]) dfs(i), lead.pb(i);
    cout << sz(lead) - 2 << '\n';
    rep(i, 1, sz(lead) - 2, 1) cout << lead[i] << " " << lead[i + 1] << '\n';
}