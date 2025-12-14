/**
problem:https://codeforces.com/contest/1832/problem/B
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/07, Time: 08:07:49
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(), x.end()
#define ll long long
void solve(){
    int n; cin >> n;
    int k; cin >> k;
    vector<ll> a(n + 1); for(int i = 1; i <= n; ++i) cin >> a[i]; 
    sort(all(a));
    for (int i = 1; i <= n; ++i) a[i] += a[i - 1];
    ll mx = 0;
    for (int i = 0; i <= k; ++i) mx = max(mx, a[n - k + i] -  a[i * 2]);
    cout << mx << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}