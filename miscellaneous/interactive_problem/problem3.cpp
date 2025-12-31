/**
problem:https://codeforces.com/contest/1807/problem/E
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/16, Time: 15:22:16
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
    vector<ll> a(n + 1); rep(i, 1, n, 1) cin >> a[i], a[i] += a[i - 1];
    int l = 1, r = n;
    ll total;
    while (l < r){
        int mid = l + r >> 1;
        cout << "? " <<  mid - l + 1 << ' ';
        rep(i, l, mid, 1) cout << i << " "; cout << endl;
        cin >> total;
        if (total > a[mid] - a[l - 1]) r = mid;
        else l = mid + 1;
    }
    cout << "! " << l << endl;
}
int main() {
    // faster
    int t; cin >> t;
    while (t--) solve();
}