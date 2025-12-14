/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/23, Time: 15:25:41
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define pb push_back

ll dist = 1e16;
int main() {
    faster
    int n; cin >> n;
    vector<ll>a(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i];
    vector<ll> pre(n + 1);
    for (int i = 1; i <= n; ++i) pre[i] = pre[i - 1] + a[i];
    for (int k = 1; k <= n; ++k) dist = min(dist, abs(pre[n] - 2 * pre[k]));
    cout << dist << endl;
}