/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/07, Time: 20:04:57
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
void solve(){
    int n; cin >> n;
    vector<ll> a(n + 2);
    for (int i = 1; i <= n; ++i) cin >> a[i];
    vector<ll> pre(n + 3), suf(n + 3);
    a[0] = -1e16;
    for(int i = 2; i <= n; ++i){
        pre[i] = pre[i - 1];
        ll k = a[i] - a[i - 1];
        if (a[i - 1] - a[i - 2] > k) k = 1;
        pre[i] += k;
    }
    a[n + 1] = LLONG_MAX;
    for (int i = n - 1; i >= 1; --i){
        suf[i] = suf[i + 1];
        ll k = a[i + 1] - a[i];
        if (a[i + 2] - a[i + 1] > k) k = 1;
        suf[i] += k;
    }
    // for (int i = 1; i <= n; ++i) cout << suf[i] << " "; cout << endl;
    int q; cin >> q;
    for (int _ = 1; _ <= q; ++_){
        int l, r; cin >> l >> r;
        if (l < r) cout << pre[r] - pre[l] << '\n';
        else cout << suf[r] - suf[l] << '\n';
    }
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}