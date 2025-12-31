/**
problem:https://codeforces.com/contest/2167/problem/E
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/23, Time: 21:22:45
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define sz(x) int(x.size())
#define all(x) x.begin() + 1, x.end() - 1
#define pb push_back
#define rep(i, a, b, k) for (int i = a; i <= b; i += k)
#define per(i, a, b, k) for (int i = a; i >= b; i -= k)
void solve(){
    int n, k; cin >> n >> k; ll x; cin >> x;
    vector<int> a(n + 2); rep(i, 1, n, 1) cin >> a[i];
    sort(all(a));
    int l = 0, r = x;
    auto calc =[&](int mid){
        a[0] = -mid;
        a[n + 1] = x + mid;
        ll total = 0;
        rep(i, 1, n + 1, 1) total += max(0, a[i] - a[i - 1] - 2 * mid + 1);
        return total >= k;
    };
    while (l < r){
        int mid = l + r + 1 >> 1;
        if (calc(mid)) l = mid;
        else r = mid - 1;
    }
    // cout << l << endl;
    a[0] = -l;
    a[n + 1] = x + l;
    int cnt = 0;
    // cout << " " << l << " " << cnt << " " << k << endl;
    int j = 0;
    rep(i, 1, n + 1, 1){
        for (j = max(a[i - 1] + l, j); j <= a[i] - l && k; ++j){
            cout << j << ' '; k--;
        }
    }
    cout << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}