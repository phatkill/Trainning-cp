/**
problem:https://codeforces.com/problemset/problem/704/A
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/26, Time: 15:47:45
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
    int n, q; cin >> n >> q;
    vector<vector<int>> application(n + 1);
    vector<int> his(1);
    vector<int> vs(q + 1);
    int id = 0;
    int unRead = 0;
    int last = 0;
    rep(_, 1, q, 1){
        int type, t; cin >> type >> t;
        if (type == 1){
            unRead++;
            his.pb(id);
            application[t].pb(id++);
        }else if(type == 2){
            for (auto i: application[t]){
                if (!vs[i]) unRead--, vs[i]++;
            }
        }else{
            rep(i, last + 1, t, 1){
                if (!vs[his[i]]) vs[his[i]] = 1, unRead--;
            }
            last = max(last, t);
        }
        cout << unRead << '\n';
    }
}