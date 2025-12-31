/**
problem:https://codeforces.com/contest/2014/problem/C
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/19, Time: 22:00:17
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
    if (n <= 2) return cout << -1 << '\n', void();
    sort(all(a));
    ll sum = 0; rep(i, 1, n, 1) sum += a[i];
    // sum / (n * 2) > x <=> x * (n * 2) < sum
    ll dif = sum - a[n / 2 + 1] * (n * 2);
    cout << (dif > 0 ? 0 : -dif + 1) << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}