/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/10/31, Time: 22:24:04
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
    int n; cin >> n;
    int res = 0;
    for (int i = 0; i < 32; ++i){
        res <<= 1;
        res |= (n & 1);
        n >>= 1;
    }
    cout << res << endl;
}

int main() {
    faster
    int t; cin >> t;
    while (t--){
        solve();
    }
}