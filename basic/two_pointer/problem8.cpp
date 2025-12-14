/**
problem:https://codeforces.com/problemset/problem/1538/C
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/09, Time: 16:29:14
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define pb push_back
#define rep(i, a, b, k) for (ll i = a; i <= b; i += k)
#define per(i, a, b, k) for (ll i = a; i >= b; i -= k)
void solve(){
    int n; cin >> n;
    ll lo, hi; cin >> lo >> hi;
    vector<ll> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    sort(all(a));
    auto f = [&](ll val){
        ll cnt = 0;
        int l = 1, r = n;
        while (l <= r){
            if (a[l] + a[r] <= val) cnt += r - l, l++; // bo l
            else r--;
        }
        return cnt;
    };
    cout << f(hi) - f(lo - 1) << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}