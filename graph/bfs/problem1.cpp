/**
problem:https://cses.fi/problemset/task/1667
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/27, Time: 16:33:48
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
    vector<int> vs(n + 1), dist(n + 1), par(n + 1); 
    rep(i, 1, m, 1){
        int u, v; cin >> u >> v;
        adj[u].pb(v); adj[v].pb(u);
    }
    // bfs
    int s = 1;
    vs[s] = 1;
    dist[1] = 1;
    queue<int> qe; qe.push(1);
    while (!qe.empty()){
        int u = qe.front(); qe.pop();
        for (auto v: adj[u]) if (!vs[v]) vs[v] = 1, dist[v] = dist[u] + 1, par[v] = u, qe.push(v);
    }
    if (!vs[n]) return cout << "IMPOSSIBLE", 0;
    cout << dist[n] << '\n';
    vector<int> trace;
    while(n) trace.pb(n), n = par[n];
    reverse(all(trace)); for (auto i: trace) cout << i <<" ";
}