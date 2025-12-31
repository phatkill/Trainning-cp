/**
problem:https://cses.fi/problemset/task/1674
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/27, Time: 17:03:48
create by: Phat Of Bug
// dp on tree
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
const int N = 2e5;
vector<int> adj[N + 5];
int main() {
    faster
    int n; cin >> n;
    vector<int> employee(n + 1), sub(n + 1);
    rep(i, 2, n, 1){
        int boss; cin >> boss; adj[boss].pb(i);
    }
    function<void(int)> dfs =[&](int u){
        sub[u] = 1;
        for (auto v: adj[u]) dfs(v), sub[u] += sub[v];
    };
    dfs(1);
    rep(i, 1, n, 1) cout << sub[i] - 1 << ' ';
}