/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/06, Time: 14:48:46
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
int main() {
    faster
    int n, k; cin >> n >> k;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i], a[i] += a[i - 1];
    int id = 0;
    ll sum = 1e18;
    for (int i = k; i <= n; ++i){
        int l = i - k + 1;
        // cout << l << "  " << i << '\n';
        if (a[i] - a[l - 1] < sum) id = l, sum = a[i] - a[l - 1];
    }
    cout << id << '\n';
}