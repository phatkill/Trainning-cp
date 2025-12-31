/**
problem:https://codeforces.com/contest/2145/problem/C
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/18, Time: 21:05:33
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
    int n; cin >> n; string s; cin >> s; s = ' ' + s;
    map<int, int> mp;
    mp[0] = 0;
    int sum = 0;
    int ans = n;
    int dist = count(all(s), 'a') - count(all(s), 'b');
    rep(i, 1, n, 1){
        sum += (s[i] & 1 ? 1: -1);
        mp[sum] = i;
        if (mp.count(sum - dist)) ans = min(ans, i - mp[sum - dist]);
    }
    cout << (ans == n ? -1: ans) << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}