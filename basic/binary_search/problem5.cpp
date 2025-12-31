/**
problem:https://cses.fi/problemset/task/1620
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/18, Time: 22:41:58
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
    vector<ll> t(n + 1); rep(i, 1, n, 1) cin >> t[i];
    sort(all(t));
    auto calc =[&](ll mid){
        ll ans = 0;
        rep(i, 1, n, 1){
            if (t[i] > mid || ans >= k) break;
            ans += mid / t[i];
        }
        return ans >= k;
    };
    ll l = 1, r = 1ll * t[n] * k;
    while (l < r){
        ll mid = l + r >> 1;
        if (calc(mid)) r = mid;
        else l = mid + 1;
    }
    cout << l << '\n';
}
int main() {
    faster
    int t; t = 1;
    while (t--) solve();
}