/**
problem:https://codeforces.com/problemset/problem/1006/C
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/10, Time: 20:42:03
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define pb push_back
#define rep(i, a, b, k) for (ll i = a; i <= b; i += k)
#define per(i, a, b, k) for (ll i = a; i >= b; i -= k)

int main() {
    faster
    int n; cin >> n;
    vector<ll> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    ll sumL = 0, sumR = 0;
    int l = 1, r = n;
    ll ans = 0;
    while (l <= r){
        if (sumL <= sumR) sumL += a[l++];
        else sumR += a[r--];
        if (sumL == sumR) ans = sumL;
    }
    cout << ans;
}