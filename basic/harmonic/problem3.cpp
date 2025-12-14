/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/12, Time: 10:48:34
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
    vector<int> a(n + 1);
    map<ll, int> mp;
    rep(i, 1, n, 1) cin >> a[i], mp[a[i]]++;
    vector<ll> freq(n + 1);
    rep(i, 1, n, 1){
        rep(j, i, n, i) freq[j] += mp[i];
    }
    cout << *max_element(all(freq)) << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}