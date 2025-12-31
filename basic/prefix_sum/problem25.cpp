/**
problem:https://codeforces.com/contest/2152/problem/C
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/17, Time: 22:27:09
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
    int n, q; cin >> n >> q;
    vector<int> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    vector<int> dist(n + 1), pre(n + 1);
    rep(i, 1, n, 1) pre[i] = pre[i - 1] + a[i], dist[i] = dist[i - 1] + (i > 1 && a[i] != a[i - 1]);
    rep(_, 1, q, 1){
        int l, r; cin >> l >> r;
        int cnt1 = pre[r] - pre[l - 1], len = r - l + 1, cnt0 = len - cnt1;
        if (cnt1 % 3 || cnt0 % 3){
            cout << -1 << '\n';
            continue;
        }
        cout << len / 3 + (dist[r] - dist[l] == len - 1) << '\n';
    }
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}