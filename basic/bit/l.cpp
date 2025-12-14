/**
problem:https://onlinejudge.org/external/124/12455.pdf
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/01, Time: 20:30:24
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
    int n, p; cin >> n >> p;
    vector<int> bar(p + 1);
    for (int i = 1; i <= p; ++i) cin >> bar[i];
    int fullMask = (1 << p) - 1;
    int check = 0;
    for (int mask = 0; mask <= fullMask; ++mask){
        int total = 0;
        int curMask = mask;
        for (int i = p; i >= 1; --i){
            int state = (curMask & 1);
            curMask >>= 1;
            if (state) total += bar[i];
        }
        if (total == n) check = 1;
    }
    if (check) cout << "YES";
    else cout << "NO";
    cout << '\n';
}

int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}


// 4
// 25
// 4
//  10 12 5 7
// 925
// 10
// 45 15 120 500 235 58 6 12 175 70
// 120
// 5
// 25 25 25 25 25
// 0
// 2
// 13 567