/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/14, Time: 07:46:03
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
    int n; ll k; cin >> n >> k;
    vector<ll> a(n + 1), b(n + 1); rep(i, 1, n, 1) cin >> a[i]; rep(i, 1, n, 1) cin >> b[i];
    sort(all(a)); sort(all(b));
    int l = 1, r = n;
    int cnt = 0;
    while (l <= n && r >= 1){
        ll product = (a[l] + 1) * (b[r] + 1);
        if (product <= k + 1) cnt++, l++, r--;
        else r--;
    }
    cout << cnt << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}