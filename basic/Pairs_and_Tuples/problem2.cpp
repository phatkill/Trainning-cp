/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/26, Time: 14:21:38
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
struct Node{
    int id, bal; char c;
};
int main() {
    faster
    string s; cin >> s;
    int n = sz(s); s = '0' + s;
    int bal = 0;
    vector<Node> node(n + 1);
    rep(i, 1, n, 1){
        node[i] = {i, bal, s[i]};
        bal += (s[i] == '(' ? 1 : -1);
    }
    sort(all(node), [](const Node& a, const Node& b){
        return a.bal != b.bal ? a.bal < b.bal : a.id > b.id;
    });
    rep(i, 1, n, 1) cout << node[i].c;
}