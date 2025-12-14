/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/02, Time: 21:19:55
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    faster
    int a, b, c; cin >> a >> b >> c;
    int cnt = 0;
    for (int i = a; i <= b; ++i) cnt += (c % i == 0);
    cout << cnt;
}