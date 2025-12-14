/**
problem:https://codeforces.com/problemset/problem/2148/E
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/11, Time: 22:10:21
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
    int n, k; cin >> n >> k;
    map<ll, int> mp, freq;
    vector<ll> a(n + 1); rep(i, 1, n, 1) cin >> a[i], mp[a[i]]++;;
    rep(i, 1, n, 1){
        if (mp[a[i]] % k != 0) return cout << 0 << '\n', void();
        freq[a[i]] = mp[a[i]] / k;
    }
    mp = freq;
    freq.clear();
    ll ans = 0;
    int l = 1;
    rep(r, 1, n, 1){
        freq[a[r]]++;
        while (freq[a[r]] > mp[a[r]]) freq[a[l++]]--;
        ans += r - l + 1;
    }
    cout << ans << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}