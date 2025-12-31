/**
problem:https://atcoder.jp/contests/dp/tasks/dp_a
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/30, Time: 15:49:47
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
    int n; cin >> n;
    vector<int> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    vector<int> dp(n + 1);
    dp[2] = abs(a[2] - a[1]);
    rep(i, 3, n, 1){
        dp[i] = min(dp[i - 1] + abs(a[i] - a[i - 1]), dp[i - 2] + abs(a[i] - a[i - 2]));
    }
    cout << dp[n];
}