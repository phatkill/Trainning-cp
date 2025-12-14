/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/06, Time: 16:16:05
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve(){
    int n; cin >> n;
    vector<int> a(n + 1);
    vector<int> pre(n + 1), suf(n + 2); int mn = INT_MAX;
    for (int i = 1; i <= n; ++i) cin >> a[i], pre[i] = a[i] + pre[i - 1];
    for (int i = n; i >= 1; --i) suf[i] = suf[i + 1] + a[i];
    int x = 1;
    for (int i = 1; i <= n; ++i){
        if (mn > pre[i] + suf[i]) x = i, mn = pre[i] + suf[i];
    }
    cout << x << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}