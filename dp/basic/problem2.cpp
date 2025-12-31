/**
problem:https://atcoder.jp/contests/dp/tasks/dp_d
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/23, Time: 20:54:27
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
    int n, s; cin >> n >> s;
    vector<ll> dp(s + 1);
    rep(i, 1, n, 1){
        ll w, v; cin >> w >> v;
        per(j, s, w, 1) dp[j] = max(dp[j], dp[j - w] + v);
    }
    cout << dp[s];
}