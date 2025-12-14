/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/06, Time: 14:16:43
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
int main() {
    faster
    int n, q; cin >> n >> q;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i], a[i] += a[i - 1];
    for (int i = 1; i <= q; ++i){
        int l, r; cin >> l >> r;
        l++;
        cout << a[r] - a[l - 1] << '\n';
    }
}