/**
problem:https://cses.fi/problemset/task/1642
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/13, Time: 21:31:31
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
    int n; ll x; cin >> n >> x;
    vector<ll> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    map<ll, pair<int, int>> freq;
    rep(i, 1, n, 1){
        rep(j, i + 1, n, 1){
            ll k = x - a[i] - a[j];
            if (freq.count(k)) return cout << freq[k].first << " " << freq[k].second << " " << i << " " << j << '\n', 0;
        }
        rep(k, 1, i - 1, 1) freq[a[i] + a[k]] = {k, i};
    }
    cout << "IMPOSSIBLE";
}