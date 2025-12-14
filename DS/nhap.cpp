/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/10, Time: 22:09:18
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve(){
    int n; cin >> n;
    vector<int> a(n + 1); for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i){
        for (int j = i + 1; j <= n; ++j){
            if (!((a[j] % a[i]) & 1)){
                cout << a[i] << " " << a[j]  << '\n'; return;
            }
        }
    }
    cout << -1 << '\n';
    // max: n ** 5 * 30
    return;
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}