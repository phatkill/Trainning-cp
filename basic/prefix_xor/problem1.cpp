/**
problem:https://cses.fi/problemset/task/1650
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/24, Time: 16:25:33
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
    int n, q; cin >> n >> q;
    vector<ll> x(n + 1); rep(i, 1, n, 1) cin >> x[i], x[i] ^= x[i - 1];
    rep(i, 1, q, 1){
        int l, r; cin >> l >> r;
        cout << (x[r] ^ x[l - 1]) << '\n';
    }
    // cout << (2 ^ 4 ^ 5);
}