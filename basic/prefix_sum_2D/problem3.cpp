/**
problem:https://codeforces.com/contest/1722/problem/E
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/25, Time: 19:02:12
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
const int N = 1e3;
void solve(){
    int n, q; cin >> n >> q;
    vector<vector<ll>> pre(N + 1, vector<ll>(N + 1)), a(N + 1, vector<ll>(N + 1));
    rep(i, 1, n, 1){
        int h, w; cin >> h >> w;
        a[h][w]++;
    }
    rep(i, 1, N, 1){
        rep(j, 1, N, 1) pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + a[i][j] * i * j;
    }
    rep(i, 1, q, 1){
        int y1, x1, y2, x2; cin >> y1 >> x1 >> y2 >> x2;
        y1++, x1++; y2--; x2--;
        if (y1 > y2 || x1 > x2) cout << 0 << '\n';
        else cout << pre[y2][x2] - pre[y1 - 1][x2] - pre[y2][x1 - 1] + pre[y1 - 1][x1 - 1] << '\n';
    }
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}