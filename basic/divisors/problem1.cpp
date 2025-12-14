/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/02, Time: 21:18:23
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    faster
    int n; cin >> n;
    for (int i = 1; i <= n; ++i) if (n % i == 0) cout << i << endl;
}