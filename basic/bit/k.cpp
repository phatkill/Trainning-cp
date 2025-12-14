/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/01, Time: 19:51:31
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    faster
    int n, l, r, x; cin >> n >> l >> r >> x;
    vector<int> c(n + 1);
    for (int i = 1; i <= n; ++i) cin >> c[i];
    int fullMask = (1 << n) - 1;
    int way = 0;
    for(int mask = 0; mask <= fullMask; ++mask){
        int curMask = mask;
        int problems = 0, mx = 0, mn = 1e7;
        for (int i = n; i >= 1; --i){
            int state = (curMask & 1);
            curMask >>= 1;
            if (state) problems += c[i], mx = max(mx, c[i]), mn = min(mn, c[i]);
        }
        int dist = mx - mn;
        if (problems >= l && problems <= r && dist >= x) way++;
    }
    cout << way << endl;
}