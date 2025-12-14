/**
problem:https://codeforces.com/problemset/problem/1475/D
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/13, Time: 22:08:51
create by: Phat Of Bug
**/

/*
- tính prefix, tối ưu hóa (i, j * 2) 
 */
#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define sz(x) int(x.size())
#define all(x) x.begin() + 1, x.end()
#define pb push_back
#define rep(i, a, b, k) for (int i = a; i <= b; i += k)
#define per(i, a, b, k) for (int i = a; i >= b; i -= k)
void solve(){
    int n; ll X; cin >> n >> X;
    vector<ll> x(n + 1), y(n + 1);
    rep(i, 1, n, 1) cin >> x[i];
    rep(i, 1, n, 1) cin >> y[i];
    vector<ll> a(1), b(1);
    rep(i, 1, n, 1){
        if (y[i] == 1) a.pb(x[i]);
        else b.pb(x[i]);
    }
    sort(all(a), greater<ll>());
    sort(all(b), greater<ll>());
    n = sz(a) - 1; int m = sz(b) - 1;
    vector<ll> preA(n + 1), preB(m + 1);
    rep(i, 1, n, 1) preA[i] = preA[i - 1] + a[i];
    rep(i, 1, m, 1) preB[i] = preB[i - 1] + b[i];
    if (preA[n] + preB[m] < X) return cout << -1 << '\n', void();
    int ans = (n + m) * 2;
    int i = n;
    rep(j, 0, m, 1){
        while (i > 0 && preA[i - 1] + preB[j] >= X) i--;
        if (preA[i] + preB[j] >= X) ans = min(ans, j * 2 + i);
    }
    cout << ans << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}