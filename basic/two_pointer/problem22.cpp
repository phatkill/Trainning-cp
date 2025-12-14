/**
problem:https://cses.fi/problemset/task/1641
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/12, Time: 20:41:21
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
    vector<pair<ll, int>> a(n + 1);
    rep(i, 1, n, 1) cin >> a[i].first, a[i].second = i;
    sort(all(a));
    rep(i, 1, n, 1){
        int l = i + 1, r = n;
        while (l < r){
            ll total = a[i].first + a[l].first + a[r].first;
            if (total == x) return cout << a[i].second << " " << a[l].second << " " << a[r].second, 0;
            else if (total < x) l++;
            else r--;
        }
    }
    cout << "IMPOSSIBLE";
}