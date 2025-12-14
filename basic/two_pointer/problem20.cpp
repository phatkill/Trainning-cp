/**
problem:https://cses.fi/problemset/task/1141
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/11, Time: 20:59:35
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
    int n; cin >> n;
    map<ll, int> freq;
    int cnt = 0;
    vector<int> k(n + 1); rep(i, 1, n, 1) cin >> k[i];
    int l = 1;
    rep(r, 1, n, 1){
        freq[k[r]]++;
        while (freq[k[r]] > 1) freq[k[l++]]--;
        cnt = max(cnt, r - l + 1);
    }
    cout << cnt;
}