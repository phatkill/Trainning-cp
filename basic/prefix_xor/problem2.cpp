/**
problem:https://cses.fi/problemset/task/3426/
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/24, Time: 16:35:03
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
    ll x, a, b, c; cin >> x >> a >> b >> c;
    ll ans = 0, val = x, curr = 0;
    /*
    a[1] ^ a[k] = a[k] ^ a[0]
    a[0] ^ a[k] ^ a[1] ^ a[k + 1] ... a[n - k] ^ a[n]
     */
    rep(i, 1, n, 1){
        curr ^= val;
        if (i <= n - k) ans ^= curr;
        if (i >= k) ans ^= curr;
        val = (val * a  + b) % c;
    }
    cout << ans << endl;
}