/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/06, Time: 16:29:38
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve(){
    int n; cin >> n;
    vector<int> a(n + 1); for (int i = 1; i <= n; ++i) cin >> a[i], a[i] += a[i - 1];
    int m; cin >> m;
    for (int i = 1; i <= m; ++i){
        int worm; cin >> worm;
        cout << min(n, (int)(lower_bound(a.begin() + 1, a.end(), worm) - a.begin())) << '\n';
    }
}
int main() {
    faster
    int t; t = 1;
    while(t--) solve();
}