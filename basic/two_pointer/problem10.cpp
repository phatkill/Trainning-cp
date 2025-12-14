/**
problem:https://codeforces.com/contest/702/problem/C
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/09, Time: 17:00:38
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
    int n, m; cin >> n >> m;
    vector<ll> a(n + 1), b(m + 1); rep(i, 1, n, 1) cin >> a[i]; rep(i, 1, m, 1) cin >> b[i];
    int j = 1;
    ll dist = 0;
    rep(i, 1, n, 1){
        while (j + 1 <= m && abs(a[i] - b[j]) >= abs(a[i] - b[j + 1])) j++;
        dist = max(dist, abs(a[i] - b[j]));
    }
    cout << dist << '\n';
}   