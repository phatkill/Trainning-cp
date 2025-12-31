/**
problem:https://codeforces.com/contest/24/problem/A
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/30, Time: 14:59:21
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
const int N = 100;
vector<pair<int, int>> adj[N + 5];
int main() {
    faster
    int n; cin >> n;
    int total = 0, s1 = 0;
    rep(i, 1, n, 1){
        int u, v, w; cin >> u >> v >> w; adj[u].pb({v, 0}); adj[v].pb({u, w}), total += w;
    }
    int cur = 1, par = 0;
    rep(i, 1, n, 1){
        for (auto &[v, w]: adj[cur]) if (v != par) {s1 += w, par = cur, cur = v; break;}
    }
    cout << min(s1, total - s1);
}