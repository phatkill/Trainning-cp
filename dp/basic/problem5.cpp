/**
problem:https://atcoder.jp/contests/dp/tasks/dp_b
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/30, Time: 15:52:27
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

int main() {
    faster
    int n, k; cin >> n >> k;
    vector<ll> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    vector<ll> dp(n + 1, 1e16);
    dp[1] = 0;
    rep(i, 2, n, 1){
        rep(j, max(1, i - k), i - 1, 1) dp[i] = min(dp[i], dp[j] + abs(a[i] - a[j]));
    }
    cout << dp[n];
}