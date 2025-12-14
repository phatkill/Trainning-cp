/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/07, Time: 09:34:10
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
template<typename T>
struct Seg{
    vector<T> node;
    int n;
    Seg(int sz): n(sz){
        node.resize(4 * n + 5, T{});
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

    void update(int i, T val){
        update(1, 1, n, i, val);
    }

    T get(int id, int l, int r, int u, int v){
        if (l > v || r < u) return T{};
        if ( u <= l && r <= v) return node[id];
        int mid = l + r >> 1;
        return merge(get(id * 2, l, mid, u, v), get(id * 2 + 1, mid + 1, r, u, v));
    }

    T get(int l, int r){
        if (l > r) return T{};
        return get(1, 1, n, l, r);
    }

    T merge(T a, T b){
        return a + b;
    }
};

#define ll long long
#define all(x) x.begin(), x.end()

int main() {
    faster
    int n; cin >> n;
    vector<ll> a(n + 1);
    int cnt = 0;
    map<ll, int> com;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    Seg<int> tree(n);
    vector<ll> b = a;
    sort(all(b));
    b.erase(unique(all(b)), b.end());
    for (int i = 1; i <= n; ++i) a[i] = (int)(lower_bound(all(b), a[i]) - b.begin());
    vector<int> le(n + 1), ri(n + 1);
    for (int i = 1; i <= n; ++i){
        le[i] = tree.get(a[i] + 1, n);
        tree.update(a[i], 1);
    }


    for (int i = 1; i <= n; ++i) tree.update(a[i], -1);

    for (int i = n; i >= 1; --i){
        ri[i] = tree.get(1, a[i] - 1);
        tree.update(a[i], 1);
    }

    ll ans = 0;
    for (int i = 1; i <= n; ++i) ans += 1ll * le[i] * ri[i];
    cout << ans << '\n';
}