/**
problem:https://cses.fi/problemset/task/3139/
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/16, Time: 15:40:28
create by: Phat Of Bug
Bài này cần phải tham khảo và code lại vì nó dùng hàm gánh chứ idea không nhiều
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
map<pair<int, int>, int> mp;
int main() {
    faster
    int n; cin >> n;
    auto compare =[&](int i, int j){
        if (mp.count({i, j})) return mp[{i, j}];
        cout << "? " << i << " " << j << endl;
        string ans; cin >> ans;
        return mp[{i, j}] =  (ans == "YES");
    };
    vector<int> p(n); iota(all(p), 1);
    stable_sort(all(p), compare);
    vector<int> a(n + 1); rep(i, 0, n - 1, 1) a[p[i]] = i + 1;
    cout << "! "; rep(i, 1, n, 1) cout << a[i] << " ";
}