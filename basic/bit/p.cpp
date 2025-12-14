/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/02, Time: 14:45:29
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
struct Item{
    int w, v;
};
int main() {
    faster
    int n, m; cin >> n >> m;
    vector<Item> item(n + 1);
    for (int i = 1; i <= n; ++i) cin >> item[i].w >> item[i].v;
    int ans = 0;
    int fullMask = (1 << n) - 1;
    for (int mask = 0; mask <= fullMask; ++mask){
        int v = 0;
        int w = 0;
        int curMask = mask;
        for (int i = 1; i <= n; ++i){
            int state = (curMask & 1);
            if (state) v += item[i].v, w += item[i].w;
            curMask >>= 1;
        }
        if (w <= m) ans = max(ans, v);
    }
    cout << ans << endl;
}