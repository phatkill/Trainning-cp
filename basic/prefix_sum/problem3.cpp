/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/06, Time: 14:27:58
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    faster
    string s; cin >> s; s = '0' + s;
    int t; cin >> t;
    while (t--){
        int l, r; cin >> l >> r;
        cout << count(s.begin() + l, s.begin() + r + 1, 'a') << '\n';
    }
}