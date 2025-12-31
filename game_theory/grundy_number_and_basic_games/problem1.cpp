/**
problem:https://www.hackerrank.com/contests/5-days-of-game-theory/challenges/a-game-of-stones/problem
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/26, Time: 21:10:44
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
    vector<int> dp(n + 1);
    dp[2] = dp[3] = dp[4] = dp[5] = 1;
    rep(i, 6, n, 1) dp[i] = (min({dp[i - 2], dp[i - 3], dp[i - 5]}) == 0);
    cout << (dp[n] ? "First" : "Second") << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}