/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/01, Time: 19:30:46
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    faster
    int n; cin >> n;
    vector<int> rot(n + 1);
    for (int i = 1; i <= n; ++i) cin >> rot[i];
    int fullMask =  (1 << n) - 1;
    int check = 0;
    for (int mask = 0; mask <= fullMask; ++mask){
        int cycle = 0;
        int curMask = mask;
        for(int i = n; i >= 1; --i){
            int state = (curMask & 1);
            if (state == 1) cycle += rot[i];
            else cycle -= rot[i];
            curMask >>= 1;
        }
        if (cycle % 360 == 0) check = 1;
    }
    if (check) cout << "YES"; else cout << "NO";
}