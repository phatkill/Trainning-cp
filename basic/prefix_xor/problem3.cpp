/**
problem:https://codeforces.com/contest/2175/problem/B
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/24, Time: 17:13:56
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
    int n, l, r; cin >> n >> l >> r;
    vector<int> p(n + 1); iota(all(p), 1); p[l - 1] = p[r];
    rep(i, 1, n, 1) cout << (p[i] ^ p[i - 1]) << ' ';
    cout << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}