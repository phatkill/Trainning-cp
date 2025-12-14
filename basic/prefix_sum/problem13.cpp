/**
problem:https://codeforces.com/problemset/problem/1692/E
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/06, Time: 19:12:33
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve(){
    int n, s; cin >> n >> s;
    map<int, int> mp;
    vector<int> a(n + 1); for (int i = 1; i <= n; ++i) cin >> a[i];
    mp[0] = 0;
    int kq = n + 1;
    int sum = 0;
    for (int i = 1; i <= n; ++i){
        sum += a[i];
        if (mp.find(sum - s) != mp.end()) kq = min(kq, n - (i - mp[sum - s]));
        if (mp.find(sum) == mp.end()) mp[sum] = i;
    }
    cout << (kq != n + 1 ? kq : -1) << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}