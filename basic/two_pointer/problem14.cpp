/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/10, Time: 21:13:30
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
#define per(i, a, b, k) for (ll i = a; i >= b; i -= k)
void solve(){
    int n; cin >> n;
    vector<ll> a(n + 1); rep(i, 1, n, 1) cin >> a[i], a[i] += a[i - 1];
    string s; cin >> s; s = '0' + s;
    int l = 1, r = n;
    ll total = 0;
    while (l <= r){
        while (r >= 1 && s[r] != 'R') r--;
        while (l <= n && s[l] != 'L') l++;
        if (l < r) total += a[r] - a[l - 1], l++, r--;
    }
    cout << total << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}