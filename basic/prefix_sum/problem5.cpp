/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/06, Time: 14:55:46
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

void solve(){
    int n; cin >> n;
    int q; cin >> q;
    vector<ll> a(n + 1); for (int i = 1; i <= n; ++i) cin >> a[i], a[i] += a[i - 1];
    for (int i = 1; i <= q; ++i){
        int l, r; cin >> l >> r; ll k; cin >> k;
        ll state = a[n] - (a[r] - a[l - 1]) + (r - l + 1) * k;
        if (state & 1) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}