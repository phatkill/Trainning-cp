/**
problem:https://codeforces.com/problemset/problem/2112/C
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/11, Time: 20:48:20
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
    int n; cin >> n;
    vector<ll> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    ll ans = 0;
    rep(j, 2, n - 1, 1){
        int r = j, l = n + 1;
        rep(i, 1, j - 1, 1){
            while (r + 1 <= n && a[i] + a[j] > a[r + 1]) r++;
            while (l - 1 > j && a[i] + a[j] + a[l - 1] > a[n]) l--;
            if (l <= r) ans += r - l + 1;
        }
    }
    cout << ans << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}