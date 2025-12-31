/**
problem:https://codeforces.com/problemset/problem/1703/F
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/30, Time: 17:22:50
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
    vector<int> a(n + 1); rep(i, 1, n, 1) cin >> a[i]; 
    vector<int> b;
    ll res = 0;
    rep(i, 1, n, 1){
        if (a[i] >= i) continue;
        res += (lower_bound(all(b), a[i]) - b.begin());
        b.push_back(i);    
    }
    cout << res << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}