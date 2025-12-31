/**
problem:https://cses.fi/problemset/task/1635
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/29, Time: 15:51:29
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
const ll MOD = 1e9 + 7;
int main() {
    faster
    int n; ll x; cin >> n >> x;
    vector<int> c(n + 1); rep(i, 1, n, 1) cin >> c[i];
    vector<ll> dp(x + 1);
    dp[0] = 1;
    rep(i, 1, x, 1){
        rep(j, 1, n, 1) if (i >= c[j]) dp[i] += dp[i - c[j]], dp[i] %= MOD;
    }
    cout << dp[x];
}