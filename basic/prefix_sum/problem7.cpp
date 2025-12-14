/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/06, Time: 16:06:13
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
void solve(){
    int n, q; cin >> n;
    vector<ll> a(n + 1), pre1(n + 1), pre2(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i], pre2[i] = pre2[i - 1] + a[i];
    sort(a.begin() + 1, a.end());
    for(int i = 1; i <= n; ++i) pre1[i] = pre1[i - 1] + a[i];
    cin >> q;
    for (int _ = 1; _ <= q; ++_){
        int type; cin >> type;
        int l, r; cin >> l >> r;
        if (type == 1) cout << pre2[r] - pre2[l - 1] << '\n';
        else cout << pre1[r] - pre1[l - 1] << '\n';
    }
}
int main() {
    faster
    int t; t = 1;
    while(t--) solve();
}