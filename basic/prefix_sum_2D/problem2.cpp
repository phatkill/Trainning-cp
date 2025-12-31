/**
problem:https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/G
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/25, Time: 18:48:38
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

int main() {
    faster
    int n, m, q; cin >> n >> m >> q;
    vector<vector<ll>> a(n + 1, vector<ll>(m + 1));
    rep(i, 1, n, 1) rep(j, 1, m, 1) cin >> a[i][j];
    vector<vector<ll>> pre(n + 1, vector<ll>(m + 1));
    rep(i, 1, n, 1) rep(j, 1, m, 1) pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + a[i][j];
    rep(i, 1, q, 1){
        int y1, x1, y2, x2; cin >> y1 >> x1 >> y2 >> x2;
        cout << pre[y2][x2] - pre[y2][x1 - 1] - pre[y1 - 1][x2] + pre[y1 - 1][x1 - 1] << '\n';
    }
}