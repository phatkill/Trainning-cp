/**
problem:https://csacademy.com/contest/archive/task/gcd/
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/03, Time: 07:39:55
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    faster
    int a, b; cin >> a >> b;
    cout << __gcd(a, b);
}