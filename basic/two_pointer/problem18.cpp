/**
problem:https://codeforces.com/contest/1366/problem/B
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/11, Time: 18:55:28
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
    int n, x, m; cin >> n >> x >> m;
    int l = n, r = 1;
    rep(i, 1, m, 1){
        int lo, hi; cin >> lo >> hi;
        if (max(l, lo) <= min(r, hi)) l = min(lo, l), r = max(r, hi);
    }
    cout << r - l + 1 << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}