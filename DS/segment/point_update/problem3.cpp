/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/04, Time: 07:00:43
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
struct Item{
    ll val; int freq;
};

template <typename T>
struct Seg{
    int n; vector<T> node;
    Seg(int sz): n(sz){
        node.resize(4 * n + 4, T{});
    }

    void build(vector<ll> &a, int id, int l, int r){
        if (l == r){
            node[id].val = a[l];
            node[id].freq = 1;
            return;
        }
        int mid = l + r >> 1;
        build(a, id * 2, l, mid);
        build(a, id * 2 + 1, mid + 1, r);
        node[id] = merge(node[id * 2], node[id * 2 + 1]);
    }

    void build(vector<ll> &a){ build(a, 1, 1, n);}

    void update(int id, int l, int r, int i, T val){
        if (i > r || i < l) return;
        if (l == r){
            node[id] = val;
            return;
        }
        int mid = l + r >> 1;
        update(id * 2, l, mid, i, val);
        update(id * 2 + 1, mid + 1, r, i, val);
        node[id] = merge(node[id * 2], node[id * 2 + 1]);
    }

    void update(int i, T val){
        update(1, 1, n, i, val);
    }

    T get(int id, int l, int r, int u, int v){
        if (r < u || v < l) return {INT_MAX, 0};
        if (u <= l && r <= v) return node[id];
        int mid = l + r >> 1;
        return merge(get(id * 2, l, mid, u, v), get(id * 2 + 1, mid + 1, r, u, v));
    }

    T get(int l, int r){
        return get(1, 1, n, l, r);
    }

    T merge(T a, T b){
        if (a.val > b.val) swap(a, b);
        if (a.val != b.val) return a;
        return {a.val, a.freq + b.freq};
    }
};
int main() {
    faster
    int n; cin >> n;
    int m; cin >> m;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i];
    Seg<Item> tree(n);
    tree.build(a);
    for (int i = 1; i <= m; ++i){
        int type; cin >> type;
        int u; ll v; cin >> u >> v;
        u++;
        if (type & 1) tree.update(u, {v, 1});
        else cout << tree.get(u, v).val << " " << tree.get(u, v).freq << '\n';
    }
}