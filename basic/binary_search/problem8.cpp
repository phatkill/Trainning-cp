/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/19, Time: 19:44:34
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define pb push_back
#define rep(i, a, b, k) for (int i = a; i <= b; i += k)
#define per(i, a, b, k) for (int i = a; i >= b; i -= k)
// 2 ** 100 = 1.26 * 10 ** 30
int main() {
    faster
    int n, k; cin >> n >> k;
    vector<int> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    double l = 0, r = 1e7;
    auto calc =[&](double mid){
        if (mid == 0) return true;
        ll total = 0;
        rep(i, 1, n, 1) total += a[i] / mid;
        return total >= k;
    };
    rep(i, 1, 100, 1){
        double mid = (l + r) / 2;
        if (calc(mid)) l = mid;
        else r = mid;
    }
    cout << fixed << setprecision(12) << l << '\n';  
}