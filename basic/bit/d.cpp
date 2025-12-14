/**
problem:https://vjudge.net/problem/HackerRank-si-basic-check-bit
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/10/31, Time: 19:37:49
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    faster
    int a, b; cin >> a >> b;
    int k = (a & (1 << b));
    if (k) cout << "true";
    else cout << "false";
}