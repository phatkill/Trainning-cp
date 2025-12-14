/**
problem:https://codeforces.com/contest/808/problem/B
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/08, Time: 09:08:43
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    faster
    int n, k; cin >> n >> k;
    vector<double> a(n + 1); for(int i = 1; i <= n; ++i) cin >> a[i], a[i] += a[i - 1];
    double total = 0;
    for (int i = k; i <= n; ++i) total += a[i] - a[i - k];
    cout << fixed << setprecision(12) << total / (n - k + 1);
}