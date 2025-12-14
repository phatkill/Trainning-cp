/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/01, Time: 17:42:25
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define cntBits __builtin_popcount
int main() {
    faster
    int n; cin >> n;
    cout << cntBits(n);
}