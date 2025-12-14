/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/06, Time: 15:07:17
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    freopen("bcount.in", "r", stdin); 
    freopen("bcount.out", "w", stdout);
    faster
    int n; cin >> n;
    int q; cin >> q;
    vector<vector<int>> a(n + 1, vector<int>(4, 0));
    for (int i = 1; i <= n; ++i){
        int x; cin >> x;
        for (int j = 1; j <= 3; ++j) a[i][j] += a[i - 1][j];
        if (x == 1) a[i][1]++;
        else if (x == 2) a[i][2]++;
        else a[i][3]++;
    }
    for (int i = 1; i <= q; ++i){
        int l, r; cin >> l >> r;
        int dist1 = a[r][1] - a[l - 1][1];
        int dist2 = a[r][2] - a[l - 1][2];
        int dist3 = a[r][3] - a[l - 1][3];
        cout << dist1 << " " << dist2 << " " << dist3 << '\n';
    }
}