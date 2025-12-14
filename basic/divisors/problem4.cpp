/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/02, Time: 21:34:34
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve(){
    int n; cin >> n;
    int cnt = 0;
    for (int i = 1; 1ll * i * i <= n; ++i){
        if (n % i == 0){
            cnt++;
            cnt += (n / i != i);
        }
    }
    cout << cnt << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}