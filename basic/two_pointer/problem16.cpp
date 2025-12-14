/**
problem:https://codeforces.com/problemset/problem/2149/E
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/11, Time: 15:17:24
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
// tinh so luong
// xet giao
void solve(){
    int n, k, L, R; cin >> n >> k >> L >> R;
    map<ll, int> freq1, freq2;
    vector<ll> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    ll ans = 0;
    int l1 = 1, l2 = 1;
    // l1 -> < k
    // l2 -> <= k
    rep(r, 1, n, 1){
        freq1[a[r]]++;
        freq2[a[r]]++;
        while (sz(freq1) >= k){
            freq1[a[l1]]--;
            if (freq1[a[l1]] == 0) freq1.erase(a[l1]);
            l1++;
        }
        while (sz(freq2) > k){
            freq2[a[l2]]--;
            if (freq2[a[l2]] == 0) freq2.erase(a[l2]);
            l2++;
        }
        // L <= i - start + 1 <= R => [i - R + 1, i - L + 1]
        int lo = max(l2, r - R + 1), high = min(l1 - 1, r - L + 1);
        if (lo <= high) ans += high - lo + 1;
    }
    cout << ans << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}