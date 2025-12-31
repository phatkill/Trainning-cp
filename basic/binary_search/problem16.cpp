/**
problem:https://atcoder.jp/contests/abc395/tasks/abc395_f
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/29, Time: 17:35:33
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
    int n; cin >> n;
    ll x; cin >> x;
    ll l = 0, r = 2e9;
    ll ans = 0;
    vector<ll> u(n + 1), d(n + 1); rep(i, 1, n, 1) cin >> u[i] >> d[i], r = min(r, u[i] + d[i]), ans += u[i] + d[i];
    auto check =[&](ll h){
        ll le = max(1ll * 0, h - d[1]), ri = u[1];
        if (le > ri) return 0;
        rep(i, 2, n, 1){
            le -= x, ri += x;
            le = max(le, h - d[i]); // h = u[i] + d[i]  <=> h - d[i] <= u[i]
            ri = min(ri, u[i]);
            if (le > ri) return 0;
        }
        return 1;
    };
    while (l < r){
        ll mid = l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    ll h = l;
    cout << ans - h * n;
}