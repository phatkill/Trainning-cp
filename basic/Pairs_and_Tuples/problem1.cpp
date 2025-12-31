/**
problem:https://codeforces.com/contest/44/problem/A
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/26, Time: 13:54:20
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
    int t; cin >> t;
    map<string, int> mp;
    cin.ignore();
    rep(i, 1, t, 1){
        string s; getline(cin, s); mp[s]++;
    }
    cout << sz(mp);
}