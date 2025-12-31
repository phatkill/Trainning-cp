/**
problem:https://codeforces.com/contest/2158/problem/C
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/19, Time: 18:12:14
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
    int n, k; cin >> n >> k;
    vector<ll> a(n + 1), b(n + 1); rep(i, 1, n, 1) cin >> a[i]; rep(i, 1, n, 1) cin >> b[i];
    vector<ll> l(n + 1, -1e16), r(n + 2);
    rep(i, 1, n, 1) l[i] = (l[i - 1] > 0 ? l[i - 1]: 0) + a[i];
    per(i, n, 1, 1) r[i] = (r[i + 1] > 0 ? r[i + 1]: 0) + a[i];
    k &= 1;
    if (k){
        ll ans = -1e16;
        rep(i, 1, n, 1) ans = max(ans, l[i] + r[i] - a[i] + b[i]);
        cout << ans;
    }
    else cout << *max_element(all(l));
    cout << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}