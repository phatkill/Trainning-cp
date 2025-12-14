/**
problem:https://codeforces.com/problemset/problem/1738/B
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/20, Time: 15:28:41
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define pb push_back
void solve(){
    int n, k; cin >> n >> k;
    vector<ll> a(n + 1), s(n + 1);
    for (int i = n - k + 1; i <= n; ++i) cin >> s[i];
    for (int i = n - k + 2; i <= n; ++i) a[i] = s[i] - s[i - 1];
    if (k == 1) cout << "YES\n";
    else if (!is_sorted(a.begin() + n - k + 2, a.end()) || a[n - k + 2] * (n - k + 1) < s[n - k + 1] ) cout << "NO\n";
    else cout << "YES\n";
}

int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}