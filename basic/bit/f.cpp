/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/10/31, Time: 20:27:45
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
    int n; cin >> n;
    int ans = 0;
    for (int i = 0; i < 32; i += 2){
        int a = (1 << i);
        int b = (1 << (i + 1));
        if (n & a) ans += b;
        if (n & b) ans += a;
    }
    cout << ans << endl;
}

int main() {
    faster
    int t; cin >> t;
    while (t--){
        solve();
    }
}