/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/08, Time: 08:54:58
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    faster
    int n, k; cin >> n >> k;
    string s; cin >> s; s = '0' + s;
    vector<int> pre(n + 1);
    for (int i = 1; i <= n; ++i){
        pre[i] = pre[i - 1];
        if (s[i] == 'L') pre[i]--;
        else pre[i]++;
    }
    for (int i = 1; i <= k; ++i){
        int l, r; cin >> l >> r;
        if (pre[r] - pre[l - 1] > 0) cout << "Y";
        else cout << "N";
    }
}