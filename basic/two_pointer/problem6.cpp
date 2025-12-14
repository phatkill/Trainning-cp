/**
problem:https://cses.fi/problemset/task/1640
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/08, Time: 19:00:50
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
    int n; ll x; cin >> n >> x;
    vector<ll> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    map<ll, int> mp;
    rep(i, 1, n, 1){
        if (mp.count(x - a[i])) return cout << mp[x - a[i]] << " " << i, 0;
        mp[a[i]] = i;
    }
    cout << "IMPOSSIBLE";
}