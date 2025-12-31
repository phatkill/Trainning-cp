/**
problem:https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/18, Time: 22:17:15
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define sz(x) int(x.size())
#define all(x) x.begin() + 1, x.end()
#define pb push_back
#define rep(i, a, b, k) for (int i = a; i <= b; i += k)
#define per(i, a, b, k) for (int i = a; i >= b; i -= k)

int main() {
    faster
    int n, k; cin >> n >> k;
    vector<int> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    rep(i, 1, k, 1){
        int x; cin >> x;
        cout << ((upper_bound(all(a), x) - a.begin()) - 1) << '\n';
    }
}