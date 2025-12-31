/**
problem:https://cses.fi/problemset/task/1633
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/23, Time: 20:46:54
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
    int n; cin >> n;
    vector<ll> dp(n + 1);
    dp[0] = 1;
    rep(i, 1, n, 1){
        rep(j, max(i - 6, 0), i - 1, 1) dp[i] += dp[j], dp[i] %= MOD;
    }
    cout << dp[n];
}