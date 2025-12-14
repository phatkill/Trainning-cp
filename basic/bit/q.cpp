/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/02, Time: 15:04:37
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
int main() {
    faster
    int n; cin >> n;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; ++i) cin >> p[i];
    int fullMask = (1 << n) - 1;
    ll dist = LLONG_MAX;
    for (int mask = 0; mask <= fullMask; ++mask){
        int curMask = mask;
        ll total = 0;
        for (int i = 1; i <= n; ++i){
            if (curMask & 1) total += p[i];
            else total -= p[i];
            curMask >>= 1;
        }
        dist = min(dist, abs(total));
    }
    cout << dist << endl;
}