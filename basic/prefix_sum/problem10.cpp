/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/06, Time: 16:45:41
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve(){
    int k, n; cin >> n >> k;
    string s; cin >> s; s = '0' + s;
    int mn = n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) a[i] += a[i - 1] + (s[i] == 'W');
    // for (int i = 1; i <= n; ++i) cout << a[i] << " "; cout << endl;
    for (int i = k; i <= n; ++i) mn = min(mn, a[i] - a[i - k]);
    cout << mn << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}