/**
problem:https://cses.fi/problemset/task/1144/
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/04, Time: 08:54:13
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
template <typename T>
struct Seg{
    int n; vector<T> node;
    Seg(int sz): n(sz){
        node.resize(4 * n + 4, T{});
    }

    void build(vector<T> &a, int id, int l, int r){
        if (l == r){
            node[id] = a[l];
            return;
        }
        int mid = l + r >> 1;
        build(a, id * 2, l, mid);
        build(a, id * 2 + 1, mid + 1, r);
        node[id] = merge(node[id * 2], node[id * 2 + 1]);
    }

    void build(vector<T> &a) {build(a, 1, 1, n);}

    void update(int id, int l, int r, int i, T val){
        if (i > r || i < l) return;
        if (l == r){
            node[id] += val;
            return;
        }
        int mid = l + r >> 1;
        update(id * 2, l, mid, i, val);
        update(id * 2 + 1, mid + 1, r, i, val);
        node[id] = merge(node[id * 2], node[id * 2 + 1]);
    }

    void update(int i, T val) {update(1, 1, n, i, val);}

    T get(int id, int l, int r, int u, int v){
        if (l > v || r < u) return T{};
        if (u <= l && r <= v) return node[id];
        int mid = l + r >> 1;
        return merge(get(id * 2, l, mid, u, v), get(id * 2 + 1, mid + 1, r, u, v));
    }

    T get(int l, int r){ return get(1, 1, n, l, r);}

    T merge(T a, T b){
        return a + b;
    }
};
#define all(x) x.begin(), x.end()
struct Item{
    char type; ll u, v;
};
#define pb push_back
int main() {
    faster
    int n, q; cin >> n >> q;
    vector<ll> p(n + 1);
    vector<Item> ops(q + 1);
    vector<ll> vals;
    for (int i = 1; i <= n; ++i) cin >> p[i], vals.pb(p[i]);
    for (int i = 1; i <= q; ++i){
        cin >> ops[i].type >> ops[i].u >> ops[i].v;
        if (ops[i].type == '!') vals.pb(ops[i].v);
    }
    sort(all(vals));
    vals.erase(unique(all(vals)), vals.end());
    auto id =[&](ll x){
        return int(lower_bound(all(vals), x) - vals.begin()) + 1;
    };

    Seg<int> tree(n + q);
    for (int i = 1; i <= n; ++i) tree.update(id(p[i]), 1);
    for (int i = 1; i <= q; ++i){
        auto [type, u, v] = ops[i];
        if (type == '!'){
            tree.update(id(p[u]), -1);
            p[u] = v;
            tree.update(id(p[u]), 1);
        }else{
            int r = (int)(upper_bound(all(vals), v) - vals.begin());
            int l = int(lower_bound(all(vals), u) - vals.begin()) + 1;
            if (l > r) cout << 0 << '\n';
            else cout << tree.get(l, r) << '\n';
        }
    }
}