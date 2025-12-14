/**
problem:https://codeforces.com/contest/1646/problem/C
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/02, Time: 15:33:19
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
const int N = 16;
ll f[N + 1];
int fullMask = (1 << N) - 1;
#define cntBit(x) __builtin_popcountll(x)
#define firstBit(x) __builtin_ctz(x)
void solve(){
    ll n; cin >> n;
    vector<pair<ll, int>> sum(fullMask + 1);
    sum[0] = {0, 0};
    for (int mask = 1; mask <= fullMask; ++mask){
        int x = mask & -mask;
        int j = firstBit(x);
        sum[mask] = {sum[mask ^ x].first + f[j], cntBit(mask)};
    }
    int ans = cntBit(n);
    for (int mask = 0; mask <= fullMask; ++mask){
        //  cout << mask << " " << sum[mask].first << " " << sum[mask].second << " " <<  sum[mask].second + cntBit(n - sum[mask].first) << endl;
        if (sum[mask].first <= n) ans = min(ans, sum[mask].second + cntBit(n - sum[mask].first));
    }
    cout << ans << endl;
}

int main() {
    faster
    f[0] = 1; for (int i = 1; i <= N; ++i) f[i] = f[i - 1] * i;
    int t; cin >> t;
    while (t--) solve();
}