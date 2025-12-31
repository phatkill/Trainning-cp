/**
problem:https://codeforces.com/contest/1872/problem/E
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/24, Time: 17:35:40
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
    vector<ll> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    string s; cin >> s; s = '0' + s;
    vector<ll> ans(2);
    rep(i, 1, n, 1){
        if (s[i] & 1) ans[1] ^= a[i];
        else ans[0] ^= a[i];
    }
    rep(i, 1, n, 1) a[i] ^= a[i - 1];
    int q; cin >> q;
    rep(i, 1, q, 1){
        int type; cin >> type;
        if (type == 1){
            int l, r; cin >> l >> r;
            ans[1] ^= (a[r] ^ a[l - 1]);
            ans[0] ^= (a[r] ^ a[l - 1]);
        }
        else{
            int k; cin >> k;
            cout << ans[k] << ' ';
        }
    }
    cout << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}