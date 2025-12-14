/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/02, Time: 14:18:46
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define sz(s) int(s.size())
int main() {
    faster
    string s; cin >> s;
    ll total = 0;
    int n = sz(s);
    int fullMask = (1 << (n - 1)) - 1; 
    for (int mask = 0; mask <= fullMask; ++mask){
        int curMask = mask;
        ll num = 0;
        for (int i = 1; i <= n; ++i){
            num = num * 10 + (s[i - 1] - '0');
            if (i == n || (curMask & 1)) total += num, num = 0;
            curMask >>= 1;
        }
    }
    cout << total;
}