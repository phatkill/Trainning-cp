/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/10, Time: 15:45:51
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
#define per(i, a, b, k) for (ll i = a; i >= b; i -= k)

int main() {
    faster
    int n; cin >> n;
    string s; cin >> s; s = '0' + s;
    map<int, int> mp;
    rep(i, 1, n, 1) mp[s[i]]++;
    int x = mp.size();
    mp.clear();
    int cnt = n;
    int l = 1;
    int dist = 0;
    rep(r, 1, n, 1){
        mp[s[r]]++;
        dist += mp[s[r]] == 1;
        while (dist == x){
            cnt = min(cnt, r - l + 1);
            dist -= (mp[s[l]] == 1); mp[s[l++]]--;
        }
    }
    cout << cnt;
}