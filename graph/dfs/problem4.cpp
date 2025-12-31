/**
problem:https://codeforces.com/contest/727/problem/A
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/30, Time: 14:08:09
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
    int a, b; cin >> a >> b;
    vector<int> path;
    while (b > a){
        if ((b & 1) && b % 10 != 1) return cout << "NO", 0;
        if (b & 1) path.pb(b), b = (b - 1) / 10;
        else path.pb(b), b /= 2;
    }
    if (b != a) return cout << "NO", 0;
    cout << "YES" << '\n';
    path.pb(a);
    reverse(all(path)); cout << sz(path) << '\n';
    for (auto i: path) cout << i << " ";
}