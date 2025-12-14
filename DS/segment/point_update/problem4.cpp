/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/04, Time: 08:38:53
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
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

    void build(vector<T> &a){build(a, 1, 1, n);}

    void update(int id, int l, int r, int i, T val){
        if (i < l || i > r) return;
        if (l == r){
            node[id] = val;
            return;
        }
        int mid = l + r >> 1;
        update(id * 2, l, mid, i, val);
        update(id * 2 + 1, mid + 1, r, i, val);
        node[id] = merge(node[id * 2], node[id * 2 + 1]);
    }

    void update(int i, T val) {update(1, 1, n, i, val);}

    T get(int id, int l, int r, int u, int v){
        if (v < l || u > r) return T{};
        if (u <= l && r <= v) return node[id];
        int mid = l + r >> 1;
        return merge(get(id * 2, l, mid, u, v), get(id * 2 + 1, mid + 1, r, u, v));
    }

    T get(int l, int r){return get(1, 1, n, l, r);}

    T merge(T a, T b){
        return a + b;
    }
};


int main() {
    faster
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i];
    Seg<int> tree(n);
    for (int i = 1; i <= n; ++i){
        cout << tree.get(a[i] + 1, n) << " ";
        tree.update(a[i], 1);
    }
}