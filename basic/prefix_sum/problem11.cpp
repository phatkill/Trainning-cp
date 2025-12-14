/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/06, Time: 16:52:56
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define all(x) x.begin(), x.end()
void solve(){
    int n, q; cin >> n >> q;
    vector<ll> a(n + 1), pre(n + 1), mx(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i], mx[i] = max(a[i], mx[i - 1]), pre[i] += pre[i - 1] + a[i];
    for (int i = 1; i <= q; ++i){
        ll k; cin >> k;
        int pos = (int)(upper_bound(all(mx), k) - mx.begin()) - 1;
        // cout << pos << '\n';
        cout << pre[pos] << ' ';
    }
    cout << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}