/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/11, Time: 17:23:51
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
    int n; ll x; cin >> n >> x;
    vector<ll> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    sort(all(a));
    int l = 1, r = n;
    ll sum = 0;
    ll bonus = 0;
    vector<ll> ans;
    while (l <= r){
        if (sum % x + a[r] >= x) bonus += a[r], sum += a[r], ans.pb(a[r--]);
        else sum += a[l], ans.pb(a[l++]);
    }
    cout << bonus << '\n';
    for (auto i: ans) cout << i << " "; cout << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}