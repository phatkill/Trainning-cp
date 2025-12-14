/**
problem:https://codeforces.com/contest/1350/problem/B
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/12, Time: 16:38:10
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
    vector<ll> dp(n + 1, 1);
    rep(i, 1, n, 1){
        rep(j, i * 2, n, i) if (a[j] > a[i]) dp[j] = max(dp[j], dp[i] + 1);
    }
    cout << *max_element(all(dp)) << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}