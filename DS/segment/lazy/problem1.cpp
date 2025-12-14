/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/12, Time: 08:25:47
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
template<typename T>
struct Seg{
    int n; vector<T> node, lazy;
    Seg(int sz): n(sz){
        node.resize(4 * n + 5, T{});
        lazy.resize(4 * n + 5, T{});
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

    void build(vector<T> &a){ build(a, 1, 1, n);}

    void update(int id, int l, int r, int u, int v, T val){
        if (l > v ||  r < u) return;
        if (u <= l && r <= v){
            node[id] += val;
            return;
        }
        push(id, l, r);
        int mid = l + r >> 1;
        update(id * 2, l, mid, u, v, val);
        update(id * 2 + 1, mid + 1, r, u, v, val);
        node[id] = merge(node[id * 2], node[id * 2 + 1]);
    }

    void update(int l, int r, T val){update(1, 1, n, l, r, val);}

    void apply(int id, T val){
        node[id] += val;
        lazy[id] = val;
    }

    void push(int id, int l, int r){
        apply(id * 2, lazy[id]);
        apply(id * 2 + 1, lazy[id]);
        lazy[id] = 0;
    }

    T get(int id, int l, int r, int u, int v){
        if (l > v || r < u) return T{};
        if (u <= l && r <= v) return node[id];
        int mid = l + r >> 1;
        return merge(get(id * 2, l, mid, u, v), get(id * 2 + 1, mid + 1, r, u, v));
    }

    T get(int l, int r){return get(1, 1, n, l, r);}
    
};
int main() {
    faster
    int n; cin >> n;
    int q; cin >> q;
    Seg<ll> tree(n);
    for (int i = 1; i <= q; ++i){
        int type, l, r; ll val; cin >> type >> l >> r;
        if (type & 1) cin >> val, tree.update(l, r, val);
    }
}