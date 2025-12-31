/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/21, Time: 15:51:18
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

int main() {
    faster
    int n; ll x; cin >> n >> x;
    vector<pair<int, int>> a(n + 1);
    rep(i, 1, n, 1) cin >> a[i].first, a[i].second = i;
    sort(all(a));
    // dk hai con tro: day don dieu
    int l = 1, r = n;
    int check = 0; // check = 1 => co cap thoa man = x, neu 0 thi khong co
    while (l < r){
        if (a[l].first + a[r].first > x) r--;
        else if( a[l].first + a[r].first < x) l++;
        else return cout << a[l].second << " " << a[r].second, 0;
    }
    cout << "IMPOSSIBLE";
}